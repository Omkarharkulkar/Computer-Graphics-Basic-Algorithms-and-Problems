// 2D Transformation

#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

int main()
{
    int gd=DETECT,gm,s;
    initgraph(&gd,&gm,(char*)"");
    
    cout<<"\n1.Rotation\n2.Scaling"<<endl;
    cout<<"\nEnter your choice:";
    cin>>s;
    cout<<"\n\n";
    switch(s)
    {  
        case 1: // Rotation
        {  
		    int x1=30,y1=30,x2=80,y2=80;
            double a;
            cout<<"Rectangle with rotation"<<endl;
            setcolor(3);
            
            rectangle(x1,y1,x2,y2);
            
            cout<<"Angle of rotation:";
            cin>>a;
            a=(a*3.14)/180;
            
            long xr=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
            long yr=y1+((x2-x1)*sin(a)+(y2-y1)*cos(a));
            setcolor(2);
            
            rectangle(x1,y1,xr,yr);
            getch();
            break;
        }
        
        case 2:// Scaling
        {
            int x1=30,y1=30,x2=80,y2=80,y=2,x=2;
            
            cout<<"Before scaling"<<endl;
            setcolor(3);
            rectangle(x1,y1,x2,y2);
            
            cout<<"After scaling"<<endl;
            setcolor(10);
            rectangle(x1*x,y1*y,x2*x,y2*y);
            
            getch();
            break;
        }
        
        default:
        {
            cout<<"Invalid Selection"<<endl;
            break;
        }
    }
    
closegraph();
return 0;

}
