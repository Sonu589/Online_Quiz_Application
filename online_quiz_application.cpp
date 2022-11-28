#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
   int result=0;
   char value;
   start:
   int playquiz(void);
   result=playquiz();
   cout<<"Your Total Score Out of 10 is = "<<result<<endl;
   if(result>=6){
       cout<<"You pass the quiz"<<endl;
       cout<<"Do you want to play quiz again y or n"<<endl;
       cin>>value;
       if(value=='y' || value=='Y'){
           goto start;
       }
       else{
           cout<<"Thank You So Much Playing the quiz!!!"<<endl;
           exit(0);
       }
   }
    
}
int playquiz(){
    char input;
    char option;
    int score=0;
    cout<<"------------------------------   WELCOME TO THE QUIZ SHOW   -----------------------------------"<<endl;
    cout<<"Please Enter 's' or 'S' any of your choice to start the quiz"<<endl;
    cout<<"Read the Instructions carefully"<<endl;
    cout<<"There will be 10 Questions in a quiz"<<endl;
    cout<<"1 mark for Correct answer"<<endl;
    cout<<"No negative marking for incorrect answers"<<endl;
    cout<<"Please select option a,b,c,d any of your choice"<<endl;
    cout<<endl;
    help:
    cout<<"Enter Character to start Quiz: "<<endl;
    cin>>input;
    if(input=='s' || input=='S'){
        cout<<"Q1. Which animal is known as the king of the jungle?"<<endl;
        cout<<"(a) Lion ,  (b) Tiger,  (c) Zebra,  (d) Elephant"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else if((option=='b' || option=='B') || (option=='C' || option=='c') || (option=='D' || option=='d')){
            score=score+0;
        }
        else{
            cout<<"Please enter correct Character"<<endl;
            exit(0);
        }
        cout<<"Q2. The National bird of India?"<<endl;
        cout<<"(a) Eagle , (b) Parrot  , (c) Peacock , (d) Duck"<<endl;
        cin>>option;
        if(option=='c' || option=='C'){
            score=score+1;
        }
        else if((option=='a' || option=='A') || (option=='b' || option=='B') || (option=='D' || option=='d')){
            score=score+0;
        }
        else{
            cout<<"Please enter correct Character"<<endl;
            exit(0);
        }
        cout<<"Q3. National flower of India?"<<endl;
        cout<<"(a) Sunflower , (b) Rose,  (c) Lotus, (d) Marigold"<<endl;
        cin>>option;
        if(option=='c' || option=='C'){
            score=score+1;
        }
        else if((option=='a' || option=='A') || (option=='b' || option=='B') || (option=='D' || option=='d')){
            score=score+0;
        }
        else{
            cout<<"Please enter correct Character"<<endl;
            exit(0);
        }
        cout<<"Q4. Which festival is known as the festival of light?"<<endl;
        cout<<"(a) Holi , (b) Lohri  , (c) Dusherra , (d) Diwali"<<endl;
          cin>>option;
        if(option=='d' || option=='D'){
            score=score+1;
        }
        else if((option=='a' || option=='A') || (option=='C' || option=='c') || (option=='b' || option=='B')){
            score=score+0;
        }
        else{
            cout<<"Please enter correct Character"<<endl;
            exit(0);
        }
        cout<<"Q5. How many days are there in a week?"<<endl;
        cout<<"(a) 6 days ,  (b) 7 days , (c) 8 days,  (d) 9 days"<<endl;
        cin>>option;
        if(option=='b' || option=='B'){
            score=score+1;
        }
        else if((option=='a' || option=='A') || (option=='C' || option=='c') || (option=='d' || option=='D')){
            score=score+0;
        }
        else{
            cout<<"Please enter correct Character"<<endl;
            exit(0);
        }
        cout<<"Q6. How many days are there in a year?"<<endl;
        cout<<"(a) 350 days , (b) 360 days ,  (c) 365 days, (d) 200 days"<<endl;
        cin>>option;
        if(option=='c' || option=='C'){
            score=score+1;
        }
        else if((option=='a' || option=='A') || (option=='B' || option=='b') || (option=='d' || option=='D')){
            score=score+0;
        }
        else{
            cout<<"Please enter correct Character"<<endl;
            exit(0);
        }
        cout<<"Q7. Rainbow consist of how many colours?"<<endl;
        cout<<"(a) 6 colours,  (b) 5 colours,  (c) 4 colours, (d) 7 colours"<<endl;
        cin>>option;
        if(option=='d' || option=='D'){
            score=score+1;
        }
        else if((option=='a' || option=='A') || (option=='B' || option=='b') || (option=='c' || option=='C')){
            score=score+0;
        }
        else{
            cout<<"Please enter correct Character"<<endl;
            exit(0);
        }
        cout<<"Q8. How many hours are there in a day?"<<endl;
        cout<<"(a) 20 hours, (b) 25 hours , (c) 24 hours, (d) 70 hours"<<endl;
         cin>>option;
        if(option=='c' || option=='C'){
            score=score+1;
        }
        else if((option=='a' || option=='A') || (option=='B' || option=='b') || (option=='d' || option=='D')){
            score=score+0;
        }
        else{
            cout<<"Please enter correct Character"<<endl;
            exit(0);
        }
        cout<<"Q9. How many letters are there in the English alphabet?"<<endl;
        cout<<"(a) 21 letters , (b) 30 letters, (c) 26 letters , (d) 27 letters"<<endl;
        cin>>option;
        if(option=='c' || option=='C'){
            score=score+1;
        }
        else if((option=='a' || option=='A') || (option=='B' || option=='b') || (option=='d' || option=='D')){
            score=score+0;
        }
        else{
            cout<<"Please enter correct Character"<<endl;
            exit(0);
        }
        cout<<"Q10. Which animal is known as the 'Ship of the Desert'?"<<endl;
        cout<<"(a) Zebra,  (b) Camel , (c) Tiger,  (d) Elephant"<<endl;
          cin>>option;
        if(option=='b' || option=='B'){
            score=score+1;
        }
        else if((option=='a' || option=='A') || (option=='c' || option=='C') || (option=='d' || option=='D')){
            score=score+0;
        }
        else{
            cout<<"Please enter correct Character"<<endl;
            exit(0);
        }
    }
    else{
        cout<<"Please input correct character"<<endl;
        goto help;
    }
    return score;
}
