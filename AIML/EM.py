import numpy as np
import pandas as pd
from pgmpy.models import BayesianModel
from pgmpy.estimators import BayesianEstimator
from pgmpy.inference import VariableElimination
from pgmpy.factors.discrete import TabularCPD

# Define the structure of the network
model = BayesianModel([('A', 'C'), ('B', 'C')])

# Create random data to use with EM
np.random.seed(42)
data = {
    'A': np.random.randint(0, 2, size=1000),
    'B': np.random.randint(0, 2, size=1000),
    'C': np.random.randint(0, 2, size=1000)
}
data = pd.DataFrame(data)

# Define the CPDs (these are dummy values and should be replaced with actual data)
cpd_A = TabularCPD(variable='A', variable_card=2, values=[[0.5], [0.5]])
cpd_B = TabularCPD(variable='B', variable_card=2, values=[[0.5], [0.5]])
cpd_C = TabularCPD(variable='C', variable_card=2, values=[[0.5, 0.5, 0.5, 0.5], [0.5, 0.5, 0.5, 0.5]], evidence=['A', 'B'], evidence_card=[2, 2])

# Add CPDs to the model
model.add_cpds(cpd_A, cpd_B, cpd_C)

# Fit the model using EM
model.fit(data, estimator=BayesianEstimator, prior_type='BDeu')

# Perform inference
infer = VariableElimination(model)
result = infer.query(variables=['C'], evidence={'A': 0, 'B': 1})
print(result)
