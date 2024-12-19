import pgmpy.models as pgm
import pgmpy.factors.discrete as pgmf
import pgmpy.inference as pgmi

# Define the structure of the network
model = pgm.BayesianModel([('A', 'C'), ('B', 'C')])

# Define the conditional probability distributions (CPDs)
cpd_A = pgmf.TabularCPD(variable='A', variable_card=2, values=[[0.5], [0.5]])
cpd_B = pgmf.TabularCPD(variable='B', variable_card=2, values=[[0.5], [0.5]])
cpd_C = pgmf.TabularCPD(variable='C', variable_card=2, 
                        values=[[0.8, 0.2, 0.1, 0.9], [0.2, 0.8, 0.9, 0.1]],
                        evidence=['A', 'B'], evidence_card=[2, 2])

# Add CPDs to the model
model.add_cpds(cpd_A, cpd_B, cpd_C)

# Check if the model is valid
assert model.check_model()

# Perform inference
infer = pgmi.VariableElimination(model)
result = infer.query(variables=['C'], evidence={'A': 0, 'B': 1})
print(result)
