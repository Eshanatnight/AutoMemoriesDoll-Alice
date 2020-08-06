//******Include Files****//

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <cstring>

 //*****End Of Include Files*****//
   
   
   
 //*****Define Signatures******//
   
#define endl std::cout << "\n"

//******End Define Signatures*****//
  
  

//*****Global Variable Signature*****//

bool looper = true;
bool fuck = false;
char Pcho[25];
bool neat;
bool ESC = false;

//*****Signature End*****//
  
  
  
  
  
  //******Start Namespace*****//

namespace Alicia 
{
 
 
 //******Can We Be Friends Function*******//
   
   void CanWe()
   {
     char Frnd[15];
     std::cout << "Can we be friends?"; endl;
     std::cout << "--> \t \t";
     std::cin >> Frnd; endl;
     if(Frnd[0] == 'Y' || Frnd[0] == 'y') {
           std::cout << "Really! Omg! Thank You!!!🤭"; endl;      
         }
       else if (Frnd[0] == 'N' || Frnd[0] == 'n'){
           std::cout << "Ok No matter!"; endl;
      }
   }
   
  //*****End Function*****//

 
 //*****External Function HBD*******//
   
   void HBD()
   {
      endl; endl;
      std::cout << "Today is Your birthday right?"; endl;
      std::cout << "Happppppppiest Of Birthdays To You!"; endl;
      std::cout << "I wish I was with you."; endl;
   }
 
 //******End Function******//
   
   
   //******Goodbye Pattern*****//
     
     void Goodbye()
     {
       endl; endl; endl;
       int e,g,u,i,j,k,d = 3,r,l,m,p = 0,a,c,f;
  
       r = (4*d) - 3;
       c = (6*d) - 5;
       g = (2*d) - 3;
       u = d;
       f = d;
    
       for(i=1; i<=r; i++)
       {
          if(i<d)
          {
            for(j=1; j<f; j++)
              std::cout << " \t";
      
            for(k=1; k<=u; k++)
              std::cout << "\t*";
      
            for(l=1; l<=g; l++)
              std::cout << " \t";
      
            for(m=1; m<=u; m++)
              std::cout << "\t*";
          }
          u = u + 2;
          g = g - 2;
          f = f - 1;

          if(i>=d)
          {
            for(j=1; j<=p; j++)
              std::cout << " \t";
    
            for(k=1; k<=c; k++)
              std::cout << "\t*";
    
            p = p + 1;
            c = c - 2;
          }
  
         endl; endl;
       }
 
     }//*****End Function*****//
   
   
 
  
//*****External Funtion EndNote*** ** //
  
void G_Note()
{
  std::cout << "Hi, Eshan here, I think"; endl;
  std::cout << "How you doing? Hope everything's Amazing!"; endl;
  std::cout << "If Your struggling, know its fine,you are not alone"; endl;
  std::cout << "and it will get better."; endl;
  std::cout << "You are valid. You are loved."; endl; 
}

//*****External Function End**** * //
  
  
 

  //*****Pyramid Pattern*****//
  

    int H_Pattern()
    {
        int space, rows = 4;

          for(int i = 1, k = 0; i <= rows; ++i, k = 0)
            {
              for(space = 1; space <= rows-i; ++space)
                {
                  std::cout <<"  ";
                }

               while(k != 2*i-1)
                {
                   std::cout << "🤭 ";
                    ++k;
                }
               endl;
             }    
             endl;
          return 0;
    }


  //*****End Function*****//




//*****Pyramid Pattern 2*****//
  
  

    int P_Pattern()
    {
        int space, rows = 4;

          for(int i = 1, k = 0; i <= rows; ++i, k = 0)
            {
              for(space = 1; space <= rows-i; ++space)
                {
                  std::cout <<"  ";
                }

               while(k != 2*i-1)
                {
                   std::cout << "💜 ";
                    ++k;
                }
               endl;
             } 
             endl;   
          return 0;
    }
    
    
  //*****End Function*****//

}


   //******End Namespace******//





//*****Host Class*****//
  
class Host {
  
  private:
     char H_name[7];
     char H_Resolution[7];
     char H_Choice[20];
     unsigned int H_WinCount;
     unsigned int P_WinCount;
     unsigned int round;
     char H_RdResol[35];
     char H_Frnd[50];
     bool FCK;
  
  public:

    //*****Host Constructor****//
      
  Host()
   : H_name("Alice"), H_WinCount(0), P_WinCount(0), round(1)
      {} 
    
    //*****End Constructor*****//
      
      
      //*****Put Choice Function****//
        
        void PutCh()
        { 
          std::cout << H_Choice; endl; endl;
          
        }
      
      //****End Function*****//
      
     
      
    //*****Host Next round Function*****//
      
     void Again() 
     {
       endl; endl;
       std::cout << "Can we play again! 🥺"; endl;
       std::cout << "Please 🥺🥺🥺"; endl; endl;
       std::cout << "--> \t \t";
       std::cin >> H_RdResol;
       endl; endl;
       IncreeRound();
     } 
   
   //*****End Function*****//
   
   
   
   //*******FriendCheck*****/
     
    void H_FrndChk()
    {
       std::cout << "Can We be Best friends? please";
       endl; endl;
          std::cout << "--> \t \t";
          std::cin >> H_Frnd; 
          endl; endl;
          
       if(H_Frnd[0] == 'Y' || H_Frnd[0] == 'y') {
           std::cout << "Really! Omg! Thank You!!!🤭"; endl;      
         }
       else if (H_Frnd[0] == 'N' || H_Frnd[0] == 'n'){
           std::cout << "Ok No matter!"; endl;
      }
    }
  
  //*******End Function******//
    
   
   
   
   //*****Incree Round function******//
     
     int IncreeRound()
     {
       if(H_RdResol[0] == 'Y' || H_RdResol[0] == 'y')
       {
         std::cout << "Yaaaaaayyyyyyyy! 🤭"; endl;
         round++;
         looper = true;
       }
       
       else if (H_RdResol[0] == 'N' || H_RdResol[0] == 'n')
       {
         std::cout << "Ok next time"; endl;
         std::cout << "My Dads gonna be home soon"; endl;
         std::cout << "Byeeeeeeeeeeeeee!!!! 👋"; endl;
         looper = false;
         Alicia::Goodbye(); endl; endl;
         std::cout << "See You Soon! 🤭";
       }
       return 0;
     }
   
   //*****End Function*****//
      
      
      
 //*****Win Con Check Function*****//
       
    void WinCounter()
    {
      if(Ret(5) % 2 == 0)
      {
         H_WinCount++;
         std::cout << "I won yaaaaaaaayyyyyyyyyy🤭"; endl;
         std::cout << "yaaaaaaaaaayayyayayayyyyyy";endl;
         endl; endl; 
         Alicia::H_Pattern(); endl; endl;
       }     
      
      else if(Ret(5) % 2 == 0 && Ret(5) % 3 == 0)
      {
        std::cout << "It's a Draw"; endl;
      }
      
      else
      {
        P_WinCount++;
         std::cout << "You won yaaaaaaaayyyyyyyyyy🤭";endl;
         std::cout << "yaaaaaaaaaayayyayayayyyyyy"; endl;
         endl; endl; 
         Alicia::P_Pattern(); endl; endl;
      }
    }  
      
   //*****Function end******//
      
      
      
    //*****Return Choice Function*****//
      
     char* Ret()
     { 
       return H_Choice; 
     }
     
    //*****End Function*****//
    
    
    
    //*****Get Resolution Function*****//
     
   void GetResolution()
    {
     std::cout << "--> \t \t";
     std::cin >> H_Resolution;
    }
   
    //*****End Function*****//
      
      
      
    //*****Resolution Check Function*****//
      
      char RCheck()
      {
        if(H_Resolution[0] == 'Y' || H_Resolution[0] == 'y'){
           std::cout << "Yaaaaaaaaaaaaaaaaaayyyyyyyyyyyy 🤭";
           looper = true;
          }
          
        else if (H_Resolution[0] == 'N' || H_Resolution[0] == 'n'){
           std::cout << "Okay i understand Nextime!😃"; endl;
           std::cout << "Byeeeeeeeeeeeeeeeeeeee! 🤭";
           looper = false;
           fuck = false;
           round = 0;
         }
        
        else if (H_Resolution[0] == 'F' || H_Resolution[0] == 'f'){
           std::cout << "I don't like you! ☹️";
           looper = false;
           fuck = true;
           round = 0;
         }
         
        else{
           std::cout << "I don't Understand 🤨"; endl;
           std::cout << "Tell me again!"; endl; endl; endl;
           GetResolution(); endl;
           RCheck();
         }
       return 0;
      }
      
   //*****End Function*****//
     
     
   
    //*****Put Name Function*****//
      
     char* PutName() 
     { 
       return H_name; 
     }
    
    //*****End Function*****//
      
      
      
        //*****Put Round Function*****//
      
      int PutRound()
      {
        std::cout << round;
        return 0;
      }
    
    
    //*****End Function*****//
      
      
      //*****Return Function Round*****// 
     
     int Ret(int ret)
     { 
       return round;  
     }
   
   //*****End Function*****//
   
      
      
      
};

 //*****End Of Host Class*****//






//***** Player Class *****//

class Player{
  
  private:
      char P_name[50];
      char P_Choice[20];
      bool P_Run;
      
  public:
    
    //*****Player Constructor*****//
      
    Player()
        :P_name("Player One")
        {}
 
    //*****End Constructor*****//
      
   
   //*****RunAway Function*****//
     
     void RunAway(const char* run)
     {
       if (strcmp(run, "Yah") == 0 || strcmp(run, "yah") == 0 || 
           strcmp(run, "yup") == 0 || strcmp(run, "Yup") == 0 || 
           strcmp(run, "Sure") == 0 || strcmp(run, "sure") == 0 || 
           strcmp(run, "Why Not") == 0 || 
           strcmp(run, "why not") == 0 || strcmp(run, "Yah!") == 0||
           strcmp(run,"yah!") == 0)
          P_Run = true;
     }
   
    //*****End Function*****//
 
 
 
 
    //*****Get Choice*****//
      
     void GetChoice()
     {
       endl; endl;
       std::cout << "--> \t \t";
       std::cin >> P_Choice; endl;
     }
 
    //*****End Function*****//
      
 
 
   
  
  
   //*****Return Function Player Name*****//
     
       const char* Ret(const char*)
       { 
         return P_name;  
       }
   
   //*****End Function*****//
     
     
     
     
   //*****Return Player Choice Function*****//
     
    char* Ret()
    {  
      return P_Choice;   
    }
    
   //******End Function******//
   
   
   
 
   //*****Get Name Function*****//
     
    void GetName()
    { 
       std::cout << "--> \t \t";
       std::cin >> P_name; 
    }  
    
    //*****End Function*****//
    
    
    
    
    //*****Put Name Function*****//
      
    char PutName()
    {
      puts(P_name);
      return 0;
    }
    
    //*****End Function*****//
      
      
    //******Run Away Check Function*****//
      
      
   void RunChk()
   {
     if (P_Run == true)
         std::cout << "Any time you want!"; endl; endl;
   }
  
   //******End Function*****//
   
         
      
};

   //***** End of Class *****//
     
     
     
     
     
     //*****Namespace confront*****//
     
namespace confront  
{
  
  
  
   //*****Choose Choice Function*****//
     
     
     void ChooseChoice(Player P, Host H1)
     { 
       strcpy_s(Pcho, P.Ret());
       if (H1.Ret(5) % 2 == 0){
        if (Pcho[0] == 'R' || Pcho[0] == 'r'){
           strcpy_s(H1.Ret(),sizeof("Paper"), "Paper"); endl;
           H1.PutCh();
           }
        if (Pcho[0] == 'P' || Pcho[0] == 'p'){
           strcpy_s(H1.Ret(),sizeof("Scissors"), "Scissors"); endl;
           H1.PutCh();
           }
        if (Pcho[0] == 'S' || Pcho[0] == 's'){
           strcpy_s(H1.Ret(),sizeof("Rock"), "Rock"); endl;
           H1.PutCh();
           }
        }
        
      else if(H1.Ret(5) % 2 == 0 && H1.Ret(5) % 3 == 0) {
        if (Pcho[0] == 'R' || Pcho[0] == 'r'){
           strcpy_s(H1.Ret(),sizeof("Rock"), "Rock"); endl;
           H1.PutCh();
           }
        if (Pcho[0] == 'P' || Pcho[0] == 'p'){
           strcpy_s(H1.Ret(),sizeof("Paper") ,"Paper"); endl;
           H1.PutCh();
           }
        if (Pcho[0] == 'S' || Pcho[0] == 's'){
           strcpy_s(H1.Ret(),sizeof("Scissors"), "Scissors"); endl;
           H1.PutCh();
           }
      }
      
      else{
        if (Pcho[0] == 'R' || Pcho[0] == 'r'){
           strcpy_s(H1.Ret(),sizeof("Scissors"), "Scissors"); endl;
           H1.PutCh();
           }
        if (Pcho[0] == 'P' || Pcho[0] == 'p'){
            strcpy_s(H1.Ret(), sizeof("Rock"), "Rock"); endl;
           H1.PutCh();
           }
        if (Pcho[0] == 'S' || Pcho[0] == 's'){
           strcpy_s(H1.Ret(),sizeof("Paper"), "Paper"); endl;
           H1.PutCh();
           }
      }
      
      
     H1.WinCounter();
    }
        
  //*****End Function*****//
    
    
    


 //******Name Confession Function******//
   
   
   void NameCheck(Player P, Host H1) 
   {
    const char* nam;
    nam = "nam";
     
     if(strcmp(P.Ret("Alice"), "Aishee") == 0 || strcmp(P.Ret(nam), "Ai") == 0)
     {
       char RunAway[15];
       std::cout << "You are Ai!, The Queen!"; endl;
       std::cout << "You know you are really pretty! 🤭"; endl;
       std::cout << "How are you so smol? 🤭"; endl;
       std::cout << "Eshan has told me everything about you!🥺"; endl;
       std::cout << "Want to run away? 👀"; endl;
       std::cout << "--> \t \t";
       std::cin >> RunAway; endl;
       P.RunAway(RunAway);
       P.RunChk();
       std::cout << "Give him a big Hug from me! 🤭"; endl;
       std::cout << "I Wish I could Meet You irl! One day!"; endl;
       H1.H_FrndChk();
       neat = true; endl;
       }
      
     else if(strcmp(P.Ret(nam), "Eshan") == 0 || strcmp(P.Ret(nam), "Esha") == 0 || strcmp(P.Ret(nam), "Esh") == 0) 
        {
          std::cout << "Why did you kill her?"; endl;
          std::cout << "She was innocent"; endl;
          std::cout << "Athena Was Innocent"; endl;
          endl;
          endl;
          ESC = true;
        }
     
     else if(strcmp(P.Ret(nam), "Anumita") == 0)
        {
          std::cout << "You are Puchu!"; endl;
          std::cout << "You know you are really pretty! 🤭"; endl;
          std::cout << "How are you so smol? 🤭"; endl;
          std::cout << "Eshan has told me everything about you!🥺"; endl;
          std::cout << "Give him a big Hug from me! 🤭"; endl;
          H1.H_FrndChk();
          neat = true; endl;
        }
        
     else if(strcmp(P.Ret(nam), "Sayantanee") == 0 || strcmp(P.Ret(nam), "Dawn") == 0 ||
             strcmp(P.Ret(nam), "sayantanee") == 0 || strcmp(P.Ret(nam), "dawn") == 0)
          {
          char RunAway[15];
          std::cout << "You are Dawn!"; endl; endl;
          std::cout << "You know you are really pretty! 🤭"; endl;
          std::cout << "Eshan has told me everything about you!🥺"; endl;
          std::cout << "Like how you love to read!📖"; endl;
          std::cout << "Want to run away? 👀"; endl; endl; endl;
          std::cout << "--> \t \t";
          std::cin >> RunAway; endl;
          P.RunAway(RunAway);
          P.RunChk();
          std::cout << "I Wish I could Meet You irl! One day!"; endl;
          H1.H_FrndChk();
          neat = true; endl;
     }
     
     else if(strcmp(P.Ret(nam), "Disha") == 0){
          std::cout << "You are Disha Patani!"; endl;
          std::cout << "You love CK underwear right! 🤭"; endl;
          std::cout << "Eshan has told me everything about you!🥺"; endl;
          std::cout << "You know you are Preety!🤭"; endl;
          H1.H_FrndChk();
          neat = true; endl;
          }
     
     else if(strcmp(P.Ret(nam), "Popita") == 0){
          std::cout << "You are Popita!"; endl;
          std::cout << "You know your name sounds a lot like Popcorn! 🤭"; endl;
          std::cout << "Eshan has told me everything about you!🥺"; endl;
          std::cout << "You know you really are Preety!🤭"; endl;
          H1.H_FrndChk();
          neat = true; endl;
          }
     
   }
 


//*****End Function*****//


     
     //*****Exit Function******//
       
     void Exit(Player P, Host H1){
        endl; endl; endl;
        std::cout << "Console Routine as follows:"; endl;
        const char* Frnd;
        Frnd = H1.Ret();
        std::cout << "Player Name: " << P.Ret(Frnd); endl;
        if(neat == true){
          std::cout << H1.PutName() << " Already Knew You!"; endl;
        }  
        if(Frnd[0] == 'Y' || Frnd[0] == 'y'){
          std::cout << "You made a New Best Friend!"; endl;
        }  
        std::cout << "You Played " << H1.Ret(5) << " rounds"; endl;
        
        std::cout << "Thank You For Playing!";
          
    }
    
    //******End Function*****//
    

}

    //*****End Namespace*****//
     
   
   
  //*****Main Function*****//
     
     
int main()
{
  
  //******Main Signatures*****//
    
  Player P1; Host H;
  int Choice;
  int a = 1;
  const char* all;
  
  //*******End Of Signatures******//
  
  
  //******Base Body of Alice****//
    
    
    std::cout << "Hi What's Your Name ?";
    endl; endl;
    
    P1.GetName(); endl;
    all = "all";
    P1.Ret(all);
    confront::NameCheck(P1, H);
    
    std::cout << "Hi, I'm Your Auto Memories Doll "; endl;
    std::cout << H.PutName(); endl;
    std::cout << " ;)"; endl;
    std::cout << "Nice to Meet You! "; endl;
    std::cout << P1.PutName();
    std::cout << "🤭"; endl; endl; endl;
    std::cout << "Wanna Play Rock Paper Scissors? 🥺"; endl;
    std::cout << "Can we? I am really bored! 🥺"; endl;
    std::cout << "so \'Yup\' or \'Nope\' ? 🤭"; endl; endl;
    H.GetResolution(); endl; 
    H.RCheck(); endl;
    
    
    //******End Body******//

 
    //*****Game Loop******//
 
    while (looper == true){
      std::cout << "You Go first"; endl; 
      P1.GetChoice();
      confront::ChooseChoice(P1,H);
      H.Again();
      endl;
    }
    
    
   //*****Game Loop End*******//
     
   //*****IF NEW THEN Friends?*****//
    
    if(neat == false && H.Ret(5) > 3)
    {
      Alicia::CanWe();
    }
     
    //******Post Game retort*****//
    if (fuck == false){
      confront::Exit(P1,H);
      endl; endl; endl;
         if(neat == true){
            Alicia::G_Note();
          }
    }
    
   //****** If New End*****//
     
     
    
   //******End Retort******//
     
     
 return 0;
 }

   //*****End Main*****//