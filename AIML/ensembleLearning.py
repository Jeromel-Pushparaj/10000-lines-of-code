from sklearn.ensemble import RandomForestClassifier, GradientBoostingClassifier, VotingClassifier
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score

# Load dataset
data = load_iris()
X = data.data
y = data.target

# Split dataset
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=42)

# Define base models
clf1 = RandomForestClassifier()
clf2 = GradientBoostingClassifier()

# Create an ensemble model
ensemble_model = VotingClassifier(estimators=[('rf', clf1), ('gb', clf2)], voting='hard')

# Train and evaluate
ensemble_model.fit(X_train, y_train)
y_pred = ensemble_model.predict(X_test)
print(f"Accuracy: {accuracy_score(y_test, y_pred)}")