#include<iostream>
#include<cmath>
#include<climits>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<cassert>

using namespace std;
/*
const int NUM_STUDENTS=3;
const int NUM_QUIZZES=5;
typedef int Score[NUM_STUDENTS][NUM_QUIZZES];
 void read(Score);
 void printQuizAverages(Score);
 void printClassAverages(Score);
 int main(){
     Score score;
    cout << "Enter " << NUM_QUIZZES << " scores for each student:\n";
    read(score);
    cout << "The quiz averages are:\n";
    printQuizAverages(score);
    cout << "The class averages are:\n";
    printClassAverages(score);
}
void read(Score score)
{ for (int s=0; s<NUM_STUDENTS; s++)
{ cout << "Student " << s << ": ";
for (int q=0; q<NUM_QUIZZES; q++)
cin >> score[s][q];
}
}
void printQuizAverages(Score score){
     for (int s=0; s<NUM_STUDENTS; s++){
      float sum = 0.0;
        for (int q=0; q<NUM_QUIZZES; q++)
         sum += score[s][q];
        cout << "\tStudent " << s << ": " << sum/NUM_QUIZZES << endl;
}
}
void printClassAverages(Score score){
     for (int q=0; q<NUM_QUIZZES; q++){
            float sum = 0.0;
            for (int s=0; s<NUM_STUDENTS; s++)
            sum += score[s][q];
            cout << "\tQuiz " << q << ": " << sum/NUM_STUDENTS << endl;
    }
}

int main(){
    int a[]={1,2,3,4,5,6,7,8};
    for(int i{0}; i<8; i++){
        cout<<"Memory address for index "<<i<<" is: "<<a+i<<" and its content is "<< *(a+i) << endl;
    }
}
*/
void getExtremes(float& min, float& max, float a[], int n);
int main(){
    float a[]={12,15,58,19,283,373,2899,3,6,3672,2934,98},n=sizeof(a)/sizeof(int), max, min;
    getExtremes(min,max,a,n);
    cout << "The maximum value in the array is: "<< max << endl;
    cout << "The minimun value in the array is: "<< min << endl;
}
void getExtremes(float& min, float& max, float a[], int n){
    min=a[0]; max=a[0];
    for(int i{0};i<n; i++){
        if(min>a[i]) min = a[i];
        if(max<a[i]) max = a[i];
    }
}