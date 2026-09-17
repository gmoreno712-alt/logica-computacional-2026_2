#include <iostream>
using namespace std;
int main()
    {
    //matematicas datos
    float nota_final_matematicas,examen_matematicas,nota_tareas_matematicas,nota1_m,nota2_m,nota3_m;
    //quimica datos
    float nota_final_quimica,examen_quimica,nota_tareas_quimica,nota1_q,nota2_q,nota3_q;
    //fisica datos
    float nota_final_fisica,examen_fisica,nota_tareas_fisica,nota1_f,nota2_f;
    //calculo nota matematicas
    cout<<"Nota 1 tarea de matematicas: ";
    cin>>nota1_m ;
    cout<<"Nota 2 tarea de matematicas: ";
    cin>>nota2_m ;
    cout<<"Nota 3 tarea de matematicas: ";
    cin>>nota3_m ;
    cout<<"Nota del examen de matematicas: ";
    cin>>examen_matematicas ;
    nota_final_matematicas=(((nota1_m+nota2_m+nota3_m)/3)*0.10)+(examen_matematicas*0.90);
    //calculo nota quimica
    cout<<"Nota 1 tarea de quimica: ";
    cin>>nota1_q ;
    cout<<"Nota 2 tarea de quimica: ";
    cin>>nota2_q ;
    cout<<"Nota 3 tarea de quimica: ";
    cin>>nota3_q ;
    cout<<"Nota del examen de quimica: ";
    cin>>examen_quimica ;
    nota_final_quimica=(((nota1_q+nota2_q+nota3_q)/3)*0.15)+(examen_quimica*0.85);
    //calculo nota fisica
    cout<<"Nota 1 tarea de fisica: ";
    cin>>nota1_f ;
    cout<<"Nota 2 tarea de fisica: ";
    cin>>nota2_f ;
    cout<<"Nota del examen de fisica: ";
    cin>>examen_fisica ;
    nota_final_fisica=(((nota1_f+nota2_f)/2)*0.20)+(examen_fisica*0.80);
    //nota general
    float ng;
    ng=(nota_final_fisica+nota_final_quimica+nota_final_matematicas)/3;
    cout<<"\nSu nota final general es: "<<ng;
    }