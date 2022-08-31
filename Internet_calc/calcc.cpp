#include<bits/stdc++.h>
using namespace std;

typedef class InternetStats{

    private:
    double plan,speed,lim,days,actualTime,ratio,uncappedData,actualData,pricePerGb,afterSpeed,tempTime;
    int flag;


 void disp()
    {
         
    cout<<"Total data which can be used if there was no speed cap (if speed is constantly at 100%):"<<uncappedData<<" Gb\n";
            if(flag)
    cout<<"Total data which could be actually used (if speed is constantly at 100%):"<<actualData<<"Gb\n";

        if(flag)
        cout<<"Data used over limit :"<<actualData-lim<<"GB\n";

    cout<<"Total Time in Which you will exhaust your limit (if speed is constantly at 100%):"<<(tempTime)*60 *60<<"Min\n";

    cout<<"Price per Gb (For capped data if used (100%) ):"<<pricePerGb<<"\n";

    cout<<"Ratio of uncapped data to capped data: 1:"<<ratio<<endl;

    }
   



void calc(){

    speed/=8;
    afterSpeed/=8;
    uncappedData= ( speed * ( days * 24 *60 *60) )/ 1024 ;

    if(uncappedData > lim){

        flag =1; 

    tempTime =( (lim * 1024)/speed)  / (24*60*60);

    actualTime=days-tempTime;

    actualData = (afterSpeed * (actualTime * 24 * 60 * 60 )/1024 ) + (lim) ;

    pricePerGb = plan / ( actualData ) ;
     
     ratio = uncappedData / actualData ; 
    
    }
    disp();
    }

    public:

InternetStats()
    {
        flag=0;
       plan=0.0;
       speed=0.0;
       lim=0.0;
       days=0.0;
       actualTime=0.0;
       ratio=0.0;
       uncappedData=0.0;
       actualData=0.0;
       pricePerGb=0.0;
       afterSpeed=0.0;
       tempTime=0.0;
        }


    void read()
    {
     cout<<"Enter Your Plan Price\n";
    cin>>plan;

    cout<<"Enter your speed in mbps\n";
    cin>>speed;

    cout<<"Enter Data Limit in Gb \n";
    cin>>lim;
    
    cout<<"Enter speed after FUP in mbps\n";
    cin>>afterSpeed;    
    
    cout<<"Enter Plan Validity in Days\n";
    cin>>days;
    calc();

    }
    



}intstat;


int main (void)
{
    system("CLS");

    intstat obj1;

    obj1.read();    
    
   

}