#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
using namespace std;
char ch,pass,ch1,ch2;
int ar,op,s,op1,k,p,t,j,flag;
float arr,crr;

class land
{
  int area;
 public:
  int soil_type();
  float larea();
  

};

int land::soil_type()
{
 cout<<"To identify your soil type, Read the statements below and choose accordingly \n\nGrab a handful of soil and softly compress it in your fist.\n\na)Is the soil sticky and slick to the touch and is in the same shape when you let go?";
 cout<<"\nb)Is the soil feeling spongy?";
 cout<<"\nc)Is it gritty and crumbling apart?";
 cout<<"\nd)Is it smooth and does it remain in shape for a short period of time.\n\n";
 cin>>ch;
 if (ch=='a'||ch=='A')
   {
    s=1;
    cout<<"\nYour soil type is Clay soil ";
   }
 else if (ch=='b'||ch=='B')
  {
   s=2;
   cout<<"\nYour soil type is Peat soil";
  }
 else if (ch=='c'||ch=='C')
  {
   s=3;
   cout<<"\nYour soil type is Sandy soil";
  }
 else if (ch=='d'||ch=='D')
  {
   s=4;
   cout<<"\nYour soil type is Loamy soil";
  }
  return s;
}
float land::larea()
{
 cout<<"\nEnter the total area of the plot :";
 cin>>area;
 ar=area-(0.2*area);
 cout<<"\n\nAfter reducing the area required for making pathways and for irrigation facilities,";
 cout<<"\nArea of the actual land that can be cultivated =  " <<ar<<" metersq";
 return ar;
}
int croptype(int s)
{
 if(s==1)
 {
   cout<<"\nEnter your choice\n1.)Paddy\n2.)Wheat :";
   cin>>k;
 }
 else if(s==2)
 {
  cout<<"\nEnter your choice\n1.)Jute\n2.)Rice :";
  cin>>k;
 }
 else if(s==3)
 {
  cout<<"\nEnter your choice\n1.)Wheat\n2.)Tobacco\n3.)Maize :";
  cin>>k;
 }
 else if(s==4)
 {
  cout<<"\nEnter your choice\n1.)Wheat\n2.)Sugarcane\n3.)Cotton :";
  cin>>k;
 }
 return k;
 }
struct crop
{
	float price;
	float income; 
	float yield;
}a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;

int cropyield(int k,int s,int ar)
{
 float x,y,z,stdp;
 int flag=0;
 cout<<"\n\nEnter the number of heads or pods in one meter square of land :";
 cin>>x;
 cout<<"\nEnter the number of grains per 20 heads or pods :";
 cin>>y;
 switch(s)
 {
  case 1: if(k==1)
          {
           z=2.5; //seed index(per 100 seeds)
           a1.price=19400;     //price of 1 tonne of grains
           stdp=2.7*a1.price;
           a1.yield=(x*y*z)/10000;
           a1.income=a1.yield*a1.price;
           if(stdp<a1.income)
           {
            flag=1;
           }
          }  
          else if(k==2)
          {
           z=3.4;
           a2.price=10080;
           a2.yield=(x*y*z)/10000;
           a2.income=a2.yield*a2.price;
           stdp= 1.728*a2.price;
           if(stdp<a2.income)
           {
            flag=1;
           }
          }
          break;
case 2: if(k==1)
        {
          z=0.18;
          a3.price=67000;
          stdp= 1.83*a3.price;
          a3.yield=(x*y*z)/10000;
          a3.income=a3.yield*a3.price;
          if(stdp<a3.income)
          {
           flag=1;
          }
        }
        else if(k==2)
        {
         z=2.5;
         a4.price=19400;
         stdp=2.7 *a4.price;
         a4.yield=(x*y*z)/10000;
         a4.income=a4.yield*a4.price;
         if(stdp<a4.income)
         {
            flag=1;
         }  
        }
       break;
case 3: if(k==1)
        {
         z=3.4;
         a5.price=10080;
         stdp= 2*a5.price;
         a5.yield=(x*y*z)/10000;
         a5.income=a5.yield*a5.price;
         if(stdp<a5.income)
         {
          flag=1;
         }
       }
       else if(k==2)
      {
       z=0.012;
       a6.price=124000;
       p= 10000*a6.price;
       a6.yield=(x*y*z)/10000;
       a5.income=a5.yield*a5.price;
       if(stdp<a6.income)
       {
         flag=1;
       }
      }
      else if(k==3)
       {
        z=28;
        a7.price=25000;
        stdp=7*a7.price;
        a7.yield=(x*y*z)/10000;
        a7.income=a7.yield*a7.price;
        if(stdp<a7.income)
        {
          flag=1;
        }
       } 
       break;
case 4: if(k==1)
        {
          z=3.4;
          a8.price=10080;
          stdp=3.4 *a8.price;
          a8.yield=(x*y*z)/10000;
          a8.income=a8.yield*a8.price;
          if(stdp<a8.income)
          {
           flag=1;
          }
        }
        else if(k==2)
        {
         z=0.2; //not yet
         a9.price=2850;
         stdp= 78*a9.price;
         a9.yield=(x*y*z)/10000;
         a9.income=a9.yield*a9.price;
         if(stdp<a9.income)
         {
          flag=1;
         }
        }
       else if(k==3)
       {
        z=8.5;
        a10.price=115000;
        stdp= 4*a10.price;
        a10.yield=(x*y*z)/10000;
        a10.income=a10.yield*a10.price;
         if(stdp<a10.income)
            {
            flag=1;
            }
        }
           break;
    default:cout<<"\nINVALID OPTION\n";
              break;
   }  
   return flag;

}

int main()
{
 system("cls");
 land l1;
 do
 {
 cout<<"Choose the user\n";
 cout<<"1)Administrator\n2)User\n";
 cin>>op;
 if (op==1)
 {
 	cout<<"Eneter the password: ";
 	cin>>pass;
 	if (pass=='j')
 	{cout<<"\n\t\t\t\t\tWelcome to admin";
	 do
	 { 
 	  
 	  cout<<"\n\nMENU\n****\n1)Paddy\n2)Wheat(Clayey soil)\n3)Jute\n4)Rice\n5)Wheat(Sandy soil)\n6)Tobacco\n7)Maize\n8)Wheat(Loamy soil)\n9)Sugarcane\n10)Cotton\n";
	  cin >>op1;
 	  switch(op1)
 	  {
		case 1:cout<<"\nEnter the price of Paddy :";
		       cin>>a1.price;
		       break;
	    case 2:cout<<"\nEnter the price of Wheat(Clayey soil) :";
		       cin>>a2.price;
	           break;
	    case 3:cout<<"\nEnter the price of Jute :";
		       cin>>a3.price;
	           break;
	    case 4:cout<<"\nEnter the price of Rice :";
		       cin>>a4.price;
 	    	   break;
 	    case 5:cout<<"\nEnter the price of Wheat(Sandy soil) :";
		       cin>>a5.price;
 	           break;
	    case 6:cout<<"\nEnter the price of Tobacco :";
		       cin>>a6.price;
 	    	   break;
 	    case 7:cout<<"\nEnter the price of Maize :";
		       cin>>a7.price;
 	 		   break;
	    case 8:cout<<"\nEnter the price of Wheat(Loamy soil) :";
		       cin>>a8.price;
 	    	   break;
 	   case 9:cout<<"\nEnter the price of Sugarcane :";
		       cin>>a9.price;
 	    	   break;
 	    case 10:cout<<"\nEnter the price of Cotton :";
		       cin>>a10.price;
 	    	   break;
 	    Default:cout<<"\nInvalid Choice ";
		         break;
	  } 
	  cout<<"\n\nDo you want to continue to update the prices again(y/n)?";
	  cin>>ch1;
     }while(ch1=='y'||ch1=='Y');
     
	  for(int i=1;i<35;i++)
	    cout<<"-";
	  cout<<"Crop list";
      for(int i=1;i<35;i++)
	    cout<<"-";
      cout<<"\n  Paddy    :";
      cout.width(20);
	  cout<<a1.price;
      cout<<"\n  Wheat(Clayey soil)    :";
      cout.width(20);
	  cout<<a2.price;
      cout<<"\n  Jute    :";
      cout.width(20);
	  cout<<a3.price;
      cout<<"\n  Rice    :";
      cout.width(20);
	  cout<<a4.price;
	  cout<<"\n  Wheat(Sandy soil)    :";
      cout.width(20);
	  cout<<a5.price;
	 cout<<"\n  Tobacco   :";
      cout.width(20);
	  cout<<a6.price;
	  cout<<"\n  Maize   :";
      cout.width(20);
	  cout<<a7.price;
      cout<<"\n  Wheat(Loamy soil)   :";
      cout.width(20);
	  cout<<a8.price;
	  cout<<"\n  Sugarcane    :";
      cout.width(20);
	  cout<<a9.price;
	  cout<<"\n  Cotton    :";
      cout.width(20);
	  cout<<a10.price;
	  cout<<"\n";
	  
	 
    }
     else
     cout<<"INVALID PASSWORD";
 
 }
 else if(op==2)
 
 {
   arr=l1.larea();
   crr=l1.soil_type();
   j=croptype(crr);
   t=0;
   t=cropyield(j,crr,arr);
   if(t==1)
  {
  cout<<"You are doing great, ";
  }
  else
  {
  cout<<"\n\nYour productivity is less than expected.\nGiven below are some of the ways to increase productivity: \na)Try interplanting that is growing diferent crops together at the same time (Make sure the crops are best together)";
  cout<<"\nb)Plant more densely\nc)Smart water management(Using sprinkler irrigation system you can increase the output by upto 50%";
  cout<<"\nd)Try selecting crop varieties";
  cout<<"\ne)Nitrogen usage (Efficient use of nitrogen can increase crop yield by 22%)";
  cout<<"\nTry adding mixed fertilizers containing Nitrogen, phosphorous and pottasium in the required combination\n"; 
  } 
 } 

 else
   cout<<"\nInvalid option";
   cout<<"\n\nDo you wish to continue(y/n) :";
   cin>>ch2;
}while(ch2=='y'||ch2=='Y');
 return 0;

}

