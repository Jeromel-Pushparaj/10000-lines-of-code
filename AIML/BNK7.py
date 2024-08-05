from pgmpy.models import BayesianNetwork
from pgmpy.inference import BeliefPropagation
from pgmpy.factors.discrete import TabularCPD

# Defining network structure
security_model = BayesianNetwork(
    [
        ("Burglary", "Alarm"),
        ("Earthquake", "Alarm"),
        ("Alarm", "K7Calls"),
        ("Alarm", "RamCalls"),
    ]
)

# Defining the parameters using CPT
cpd_burglary = TabularCPD(
    variable="Burglary", variable_card=2, values=[[0.999], [0.001]])
cpd_earthquake = TabularCPD(
    variable="Earthquake", variable_card=2, values=[[0.998], [0.002]])
cpd_alarm = TabularCPD(
    variable="Alarm",
    variable_card=2,
    values=[[0.999, 0.71, 0.06, 0.05], [0.001, 0.29, 0.94, 0.95]],
    evidence=["Burglary", "Earthquake"],
    evidence_card=[2, 2],)
cpd_k7calls = TabularCPD(
    variable="K7Calls",
    variable_card=2,
    values=[[0.95, 0.1], [0.05, 0.9]],
    evidence=["Alarm"],
    evidence_card=[2],)
cpd_ramcalls = TabularCPD(
    variable="RamCalls",
    variable_card=2,
    values=[[0.1, 0.7], [0.9, 0.3]],
    evidence=["Alarm"],
    evidence_card=[2],)
print(cpd_burglary)
print(cpd_earthquake)
print(cpd_alarm)
print(cpd_k7calls)
print(cpd_ramcalls )
# Associating the parameters with the model structure
security_model.add_cpds(cpd_burglary, cpd_earthquake, cpd_alarm, cpd_k7calls, cpd_ramcalls)


print(security_model)
print(security_model.check_model())
print(security_model.nodes())
print(security_model.edges())
print(security_model.local_independencies("Burglary"))
print(security_model.get_independencies())


belief_propagation = BeliefPropagation(security_model)



result = belief_propagation.query(variables=['K7Calls', 'RamCalls','Alarm','Burglary', 'Earthquake'])
print(result)