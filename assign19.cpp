#include<iostream>
#include<string>
using namespace std;
class game{
    private:
      int a[5];
    public:
      void setscore(int round,int score)
      {
            this->a[round-1]=score;
      } 
      int getscore(int round)
      {
         return a[round-1];
      } 
};
class GameResult: public game{
    private:
       int result[5];
    public:
       static const int win=2,loose=0,draw=0; 
       void setresult(int result,int round)
       {
           this->result[round-1]=result;
       }
       int getresult(int round){
            return result[round-1];
       }
       void finalresult()
       {
          int scoresum=0,resultsum=0;
          for(int i;i<5;i++)
          {
            resultsum+=result[i];
            scoresum+=getscore(i+1);
          }
       }

};
class Actor{
    private:
       char name[50]; //both are instance member variables;
       int age;
    public:
       void setname(char n[]){ strcpy(name,n); }   
       void setage(int a){  age=a;  }
       char* getname(){  return name; }
       int getage(){  return age;}

};
class TVActor:virtual public Actor{
    private:
      int numberproject;
    public:
       void setnumber(int num)
       {
           numberproject=num;
       }
       int getnumber(){ return numberproject; }
       void setTVActor(char n[],int age,int pcount)
       {
           setname(n);
           setage(age);
           setnumber(pcount);
       }
       void showTVActor()
       {
          cout<<endl;
          cout<<getname()<<" "<<getage()<<" "<<getnumber();
       }
};
class moviesActor:virtual public Actor{
    private:
      int nomovies;
    public:
       void setmovies(int num){   nomovies=num; }
       int getnomovies(){ return nomovies; }
       void setmoviesactor(char n[],int a,int nomovie)
       {
          setname(n);
          setage(a);
          setmovies(nomovie);
       } 
       void showMoviesActor()
       {
          cout<<endl;
          cout<<getname()<<" "<<getage()<<" "<<getnomovies;
       }  
};
class AllScreenActor:public TVActor,public moviesActor{
    public:
      void setActordata(char n[],int a,int tvproject,int movieproject)
      {
         setname(n);
         setage(a);
         setnumber(tvproject);
         setmovies(movieproject);

      }
      void showActordata()
      {
          cout<<endl;
          cout<<getname<<" ";
          cout<<getname()<<"  ";
          cout<<getnumber()<<"  ";
          cout<<getnomovies();
      }

};
