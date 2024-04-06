import streamlit as st
import pandas as pd
import numpy as np
import pickle

st.set_page_config(layout='wide')

# Load the trained model
with open('/Users/deogirekartik/Vscode/Technical Seminar/notebook/trained_model.pkl', 'rb') as file:
    model = pickle.load(file)
 
def predict_risk(features):
    prediction = model.predict(features)
    return prediction

def main():
    st.title('Heart Attack Risk Prediction')
  
    name = st.text_input('Name')
    
    age = st.number_input('Age', min_value=0, max_value=80, value=30)
    avg_glucose_level = st.number_input('Glucose Level', min_value=70, value=85, max_value=130)
    bmi = st.number_input('BMI', 15, 30, 15)
   
    hypertension_1  = st.radio('Hypertension', ['Yes', 'No'])
    hypertension_1  = 1 if hypertension_1 == 'Yes' else 0
    
    heart_disease_1 = st.radio('Heart Disease', ['Yes', 'No'])
    heart_disease_1 = 1 if heart_disease_1 == 'Yes' else 0
    
    gender = st.radio('Gender', ['Male', 'Female'])
    gender_Male = 1 if gender == 'Male' else 0
    gender_Other = 1 if gender == 'Female' else 0

    ever_married = st.radio('Ever Married', ['Yes', 'No'])
    ever_married_yes = 1 if ever_married == 'Yes' else 0
    
    work_type = st.radio('Work Type', ['Private', 'Self-employed','Govt_job','Children','Never_worked'])
    work_type_private = 1 if work_type == 'Private' else 0
    work_type_self_employed = 1 if work_type == 'Self-employed' else 0
    work_type_govt_job = 1 if work_type == 'Govt_job' else 0
    work_type_children = 1 if work_type == 'Children' else 0
    work_type_never_worked = 1 if work_type == 'Never_worked' else 0

    smoking_status = st.radio('Smoking Status', ['Unknown', 'Never smoked','Formerly smoked','Smokes'])
    smoking_status_unknown = 1 if smoking_status == 'Unknown' else 0
    smoking_status_never_smoked = 1 if smoking_status == 'Never smoked' else 0
    smoking_status_formerly_smoked = 1 if smoking_status == 'Formerly smoked' else 0
    smoking_status_smokes = 1 if smoking_status == 'Smokes' else 0

    input_data = {
    'age': age,
    'avg_glucose_level': avg_glucose_level,
    'bmi': bmi,
    'gender_Male': gender_Male,
    'gender_Other': gender_Other,
    'hypertension_1': hypertension_1,
    'heart_disease_1': heart_disease_1,
    'ever_married_Yes': ever_married_yes,
    'work_type_Never_worked': work_type_never_worked,
    'work_type_Private': work_type_private,
    'work_type_Self-employed': work_type_self_employed,
    'work_type_children':work_type_children,
    'smoking_status_formerly smoked': smoking_status_formerly_smoked,
    'smoking_status_never smoked': smoking_status_never_smoked,
    'smoking_status_smokes': smoking_status_smokes
}



    input_df = pd.DataFrame([input_data])

    if st.button('Predict'):
        prediction = predict_risk(input_df)
        if prediction[0] == 1:
            st.write(f'Hello {name}, you are at risk of heart attack.')
        else:
            st.write(f'Hello {name}, you are not at risk of heart attack.')
            

if __name__ == '__main__':
    main()