 #include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
 #include<dos.h>
 #define CODE {97,116,116,105,116,117,100,101,51,50,56,52}
 #define LEN 12
 #include<math.h>
 #include<time.h>
 #include"solvee.c"
 union REGS i,o;
 int as=0/* for no. of steps*/,xx=0,md=0,ass=0,bbb=0,zzz=0;
 char msg[10],nm[21][28]={"        PLAY","       SOLVE"," RANDOM PLAY","        BACK","C R A Z Y   C U B E S","        NEXT","       RETRY","        BACK","       SOLVE","        QUIT","        HELP","      SOLVE"," STEP SOLVE","      BACK","    SOLVE","      BACK","     QUIT"};
 char gh[10][10]={"F","B","U","D","L","R","X-AXIS","Y-AXIS","Z-AXIS","SPEED"};
 char rr[11][40]={" When we click "," the left button"," of the mouse"," it will rotate"," 'CLOCKWISE'"," and it will "," rotate"," 'ANTI-CLOCKWISE'"," when right button "," is clicked"};
 void main()
 {
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 cleardevice();
 restrictmptr(0,0,650,460);
 cleardevice();
 settextstyle(4,0,6);
 setcolor(3);
 outtextxy(10,50,"C R A Z Y  C U B E S");
 outtextxy(300,400,"press enter");
 setcolor(WHITE);
 rotor();
 getch();
 cleardevice();
 pwd();
 closegraph();
 }

			    //solution of cube
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 dv(int **h)
 {
 int f[12]={0,0,0,0,0,0,0,1,2,3,4,5},max[2]={0,0},i;
 {
 if((*(*h+4)==*(*h+1))&&(*(*(h+2)+7)==*(*(h+2)+4)))
 f[0]=f[0]+2;
 if((*(*h+4)==*(*h+5))&&(*(*(h+5)+3)==*(*(h+5)+4)))
 f[0]=f[0]+2;
 if((*(*h+4)==*(*h+7))&&(*(*(h+3)+1)==*(*(h+3)+4)))
 f[0]=f[0]+2;
 if((*(*h+4)==*(*h+3))&&(*(*(h+4)+5)==*(*(h+4)+4)))
 f[0]=f[0]+2;
 }

 {
 if((*(*(h+1)+4)==*(*(h+1)+1))&&(*(*(h+2)+1)==*(*(h+2)+4)))
 f[1]=f[1]+2;
 if((*(*(h+1)+4)==*(*(h+1)+5))&&(*(*(h+4)+3)==*(*(h+4)+4)))
 f[1]=f[1]+2;
 if((*(*(h+1)+4)==*(*(h+1)+7))&&(*(*(h+3)+7)==*(*(h+3)+4)))
 f[1]=f[1]+2;
 if((*(*(h+1)+4)==*(*(h+1)+3))&&(*(*(h+5)+5)==*(*(h+5)+4)))
 f[1]=f[1]+2;

 }

 {
 if((*(*(h+2)+4)==*(*(h+2)+1))&&(*(*(h+1)+1)==*(*(h+1)+4)))
 f[2]=f[2]+2;
 if((*(*(h+2)+4)==*(*(h+2)+5))&&(*(*(h+5)+1)==*(*(h+5)+4)))
 f[2]=f[2]+2;
 if((*(*(h+2)+4)==*(*(h+2)+7))&&(*(*(h)+1)==*(*(h)+4)))
 f[2]=f[2]+2;
 if((*(*(h+2)+4)==*(*(h+2)+3))&&(*(*(h+4)+1)==*(*(h+4)+4)))
 f[2]=f[2]+2;
 }

 {
 if((*(*(h+3)+4)==*(*(h+3)+1))&&(*(*(h)+7)==*(*(h)+4)))
 f[3]=f[3]+2;
 if((*(*(h+3)+4)==*(*(h+3)+5))&&(*(*(h+5)+7)==*(*(h+5)+4)))
 f[3]=f[3]+2;
 if((*(*(h+3)+4)==*(*(h+3)+7))&&(*(*(h+1)+7)==*(*(h+1)+4)))
 f[3]=f[3]+2;
 if((*(*(h+3)+4)==*(*(h+3)+3))&&(*(*(h+4)+7)==*(*(h+4)+4)))
 f[3]=f[3]+2;
 }


 {
 if((*(*(h+4)+4)==*(*(h+4)+1))&&(*(*(h+2)+3)==*(*(h+2)+4)))
 f[4]=f[4]+2;
 if((*(*(h+4)+4)==*(*(h+4)+5))&&(*(*(h)+3)==*(*(h)+4)))
 f[4]=f[4]+2;
 if((*(*(h+4)+4)==*(*(h+4)+7))&&(*(*(h+3)+3)==*(*(h+3)+4)))
 f[4]=f[4]+2;
 if((*(*(h+4)+4)==*(*(h+4)+3))&&(*(*(h+1)+5)==*(*(h+1)+4)))
 f[4]=f[4]+2;
 }


 {
 if((*(*(h+5)+4)==*(*(h+5)+1))&&(*(*(h+2)+5)==*(*(h+2)+4)))
 f[5]=f[5]+2;
 if((*(*(h+5)+4)==*(*(h+5)+5))&&(*(*(h+1)+3)==*(*(h+1)+4)))
 f[5]=f[5]+2;
 if((*(*(h+5)+4)==*(*(h+5)+7))&&(*(*(h+3)+5)==*(*(h+3)+4)))
 f[5]=f[5]+2;
 if((*(*(h+5)+4)==*(*(h+5)+3))&&(*(*(h)+5)==*(*(h)+4)))
 f[5]=f[5]+2;
 }
 for(i=0;i<=5;i++)
 {
 if(max[0]<f[i])
 {
 max[0]=f[i];
 max[1]=f[i+6];
 }
 }
 return(&max[0]);
 }


 j1(int **h)
 {
 int max,i,f[6]={0,0,0,0,0,0};
 if((*(*h+4)==*(*h))&&(*(*(h+2)+6)==*(*(h+2)+4))&&(*(*(h+4)+2)==*(*(h+4)+4)))
 f[0]=f[0]+2;
 if((*(*h+4)==*(*h+2))&&(*(*(h+2)+8)==*(*(h+2)+4))&&(*(*(h+5))==*(*(h+5)+4)))
 f[0]=f[0]+2;
 if((*(*h+4)==*(*h+6))&&(*(*(h+3))==*(*(h+3)+4))&&(*(*(h+4)+8)==*(*(h+4)+4)))
 f[0]=f[0]+2;
 if((*(*h+4)==*(*h+8))&&(*(*(h+3)+2)==*(*(h+3)+4))&&(*(*(h+5)+6)==*(*(h+5)+4)))
 f[0]=f[0]+2;



 if((*(*(h+1)+4)==*(*(h+1)))&&(*(*(h+2)+2)==*(*(h+2)+4))&&(*(*(h+5)+2)==*(*(h+5)+4)))
 f[1]=f[1]+2;
 if((*(*(h+1)+4)==*(*(h+1)+2))&&(*(*(h+4))==*(*(h+4)+4))&&(*(*(h+2))==*(*(h+2)+4)))
 f[1]=f[1]+2;
 if((*(*(h+1)+4)==*(*(h+1)+6))&&(*(*(h+5)+8)==*(*(h+5)+4))&&(*(*(h+3)+8)==*(*(h+3)+4)))
 f[1]=f[1]+2;
 if((*(*(h+1)+4)==*(*(h+1)+8))&&(*(*(h+2)+6)==*(*(h+2)+4))&&(*(*(h+4)+6)==*(*(h+4)+4)))
 f[1]=f[1]+2;


 if((*(*(h+2))==*(*(h+2)+4))&&(*(*(h+1)+2)==*(*(h+1)+4))&&(*(*(h+4))==*(*(h+4)+4)))
 f[2]=f[2]+2;
 if((*(*(h+2)+4)==*(*(h+2)+2))&&(*(*(h+5)+2)==*(*(h+5)+4))&&(*(*(h+1))==*(*(h+1)+4)))
 f[2]=f[2]+2;
 if((*(*(h+2)+4)==*(*(h+2)+6))&&(*(*(h))==*(*(h)+4))&&(*(*(h+4)+2)==*(*(h+4)+4)))
 f[2]=f[2]+2;
 if((*(*(h+2)+4)==*(*(h+2)+8))&&(*(*(h+5))==*(*(h+5)+4))&&(*(*(h)+2)==*(*(h)+4)))
 f[2]=f[2]+2;


 if((*(*(h+3)+4)==*(*(h+3)))&&(*(*(h)+6)==*(*(h)+4))&&(*(*(h+4)+8)==*(*(h+4)+4)))
 f[3]=f[3]+2;
 if((*(*(h+3)+4)==*(*(h+3)+2))&&(*(*(h+5)+6)==*(*(h+5)+4))&&(*(*(h)+8)==*(*(h)+4)))
 f[3]=f[3]+2;
 if((*(*(h+3)+4)==*(*(h+3)+6))&&(*(*(h+4)+6)==*(*(h+4)+4))&&(*(*(h+1)+8)==*(*(h+1)+4)))
 f[3]=f[3]+2;
 if((*(*(h+3)+4)==*(*(h+3)+8))&&(*(*(h+5)+8)==*(*(h+5)+4))&&(*(*(h+1)+6)==*(*(h+1)+4)))
 f[3]=f[3]+2;


 if((*(*(h+4)+4)==*(*(h+4)+0))&&(*(*(h+2)+0)==*(*(h+2)+4))&&(*(*(h+1)+2)==*(*(h+1)+4)))
 f[4]=f[4]+2;
 if((*(*(h+4)+4)==*(*(h+4)+2))&&(*(*(h)+0)==*(*(h)+4))&&(*(*(h+2)+6)==*(*(h+2)+4)))
 f[4]=f[4]+2;
 if((*(*(h+4)+4)==*(*(h+4)+6))&&(*(*(h+1)+8)==*(*(h+1)+4))&&(*(*(h+3)+6)==*(*(h+3)+4)))
 f[4]=f[4]+2;
 if((*(*(h+4)+4)==*(*(h+4)+8))&&(*(*(h)+6)==*(*(h)+4))&&(*(*(h+3))==*(*(h+3)+4)))
 f[4]=f[4]+2;



 if((*(*(h+5)+4)==*(*(h+5)+0))&&(*(*(h+2)+8)==*(*(h+2)+4))&&(*(*(h)+2)==*(*(h)+4)))
 f[5]=f[5]+2;
 if((*(*(h+5)+4)==*(*(h+5)+2))&&(*(*(h+1))==*(*(h+1)+4))&&(*(*(h+2)+2)==*(*(h+2)+4)))
 f[5]=f[5]+2;
 if((*(*(h+5)+4)==*(*(h+5)+6))&&(*(*(h+3)+2)==*(*(h+3)+4))&&(*(*(h)+8)==*(*(h)+4)))
 f[5]=f[5]+2;
 if((*(*(h+5)+4)==*(*(h+5)+8))&&(*(*(h+3)+8)==*(*(h+3)+4))&&(*(*(h+1)+6)==*(*(h+1)+4)))
 f[5]=f[5]+2;









 if((*(*h+1)==*(*h))&&(*(*(h+2)+6)==*(*(h+2)+7)))
 f[4]=f[4]+1;
 if((*(*h+6)==*(*h+7))&&(*(*(h+3))==*(*(h+3)+1)))
 f[4]=f[4]+1;
 if((*(*(h+2))==*(*(h+2)+1))&&(*(*(h+1)+2)==*(*(h+1)+1)))
 f[4]=f[4]+1;
 if((*(*(h+1)+7)==*(*(h+1)+8))&&(*(*(h+3)+6)==*(*(h+3)+7)))
 f[4]=f[4]+1;



 if((*(*(h+2)+3)==*(*(h+2)))&&(*(*(h+4))==*(*(h+4)+1)))
 f[1]=f[1]+1;
 if((*(*(h+2)+5)==*(*(h+2)+2))&&(*(*(h+5)+1)==*(*(h+5)+2)))
 f[1]=f[1]+1;
 if((*(*(h+3)+5)==*(*(h+3)+8))&&(*(*(h+5)+8)==*(*(h+5)+7)))
 f[1]=f[1]+1;
 if((*(*(h+3)+3)==*(*(h+3)+6))&&(*(*(h+4)+6)==*(*(h+4)+7)))
 f[1]=f[1]+1;


 if((*(*(h+5)+5)==*(*(h+5)+2))&&(*(*(h+1))==*(*(h+1)+3)))
 f[2]=f[2]+1;
 if((*(*(h+5)+0)==*(*(h+5)+3))&&(*(*(h)+2)==*(*(h)+5)))
 f[2]=f[2]+1;
 if((*(*(h)+0)==*(*(h)+3))&&(*(*(h+4)+2)==*(*(h+4)+5)))
 f[2]=f[2]+1;
 if((*(*(h+1)+2)==*(*(h+1)+5))&&(*(*(h+4))==*(*(h+4)+3)))
 f[2]=f[2]+1;




 if((*(*(h+5)+3)==*(*(h+5)+6))&&(*(*(h)+5)==*(*(h)+8)))
 f[3]=f[3]+1;
 if((*(*(h+1)+3)==*(*(h+1)+6))&&(*(*(h+5)+5)==*(*(h+5)+8)))
 f[3]=f[3]+1;
 if((*(*(h)+3)==*(*(h)+6))&&(*(*(h+4)+5)==*(*(h+4)+8)))
 f[3]=f[3]+1;
 if((*(*(h+4)+3)==*(*(h+4)+6))&&(*(*(h+1)+8)==*(*(h+1)+5)))
 f[3]=f[3]+1;


 if((*(*(h+5)+0)==*(*(h+5)+1))&&(*(*(h+2)+5)==*(*(h+2)+8)))
 f[0]=f[0]+1;
 if((*(*(h+4)+1)==*(*(h+4)+2))&&(*(*(h+2)+6)==*(*(h+2)+3)))
 f[0]=f[0]+1;
 if((*(*(h+5)+7)==*(*(h+5)+6))&&(*(*(h+3)+2)==*(*(h+3)+5)))
 f[0]=f[0]+1;
 if((*(*(h+4)+7)==*(*(h+4)+8))&&(*(*(h+3))==*(*(h+3)+3)))
 f[0]=f[0]+1;



 if(((*(*(h+2)+7)==*(*(h+2)+8)))&&(*(*(h)+2)==*(*(h)+1)))
 f[5]=f[5]+1;
 if((*(*(h)+7)==*(*(h)+8))&&(*(*(h+3)+1)==*(*(h+3)+2)))
 f[5]=f[5]+1;
 if((*(*(h+1)+7)==*(*(h+1)+6))&&(*(*(h+3)+7)==*(*(h+3)+8)))
 f[5]=f[5]+1;
 if((*(*(h+2)+2)==*(*(h+2)+1))&&(*(*(h+1)+0)==*(*(h+1)+1)))
 f[5]=f[5]+1;

 max=f[0];
 for(i=0;i<=5;i++)
 {
 if(f[i]>max)
 max=f[i];
 }
 return(max);
 }



scrl()
{
 int s,a=180,bn=400;
 hidemptr();
 setfillstyle(6,6);
 settextstyle(1,0,1);
 bar3d(10,125,85,145,0,1);
 outtextxy(15,122,"VIEWS");
 bar3d(500,125,620,145,0,1);
 outtextxy(510,122,"ROTATIONS");
 settextstyle(0,0,1);
 den();
 outtextxy(523,150,"click  here");
 outtextxy(8,150,"click  here");
 for(s=0;s<=2;s++)
 {
 setcolor(RED);
 setfillstyle(10,BLUE);
 sector(a-48,bn,89,271,10,10);
 fillellipse(a+48,bn,10,10);
 bar3d(a-50,bn-10,a+50,bn+10,0,0);
 outtextxy(a-50,bn,nm[12+s]);
 setcolor(WHITE);
 a=a+100;
 if(s==0)
 bn=bn+50;
 if(s==1)
 bn=bn-50;
 }

 return(0);
}
den()
{
 outtextxy(10,2,"  FRONT");
 outtextxy(110,2,"  BACK" );
 outtextxy(210,2,"  TOP");
 outtextxy(310,2,"  BOTTOM" );
 outtextxy(410,2,"  LEFT");
 outtextxy(510,2,"  RIGHT");
 return(0);
 }





showmouseptr()
{
i.x.ax=1;
int86(0x33,&i,&o);
return(0);
}



getmousepos(int *k,int *c,int *d)
{
i.x.ax=3;
int86(0x33,&i,&o);
*k=o.x.bx;
*c=o.x.cx;
*d=o.x.dx;
return(0);
}




hidemptr()
{
i.x.ax=2;
int86(0x33,&i,&o);
return(0);
}




 f1(int **h)
 {
 int temp,i,j,t1[3][3];
 as=as+1;
 //if(bbb==1)
 //frontrot();
 for(j=0;j<=2;j++)
 {
 temp=*(*(h+2)+6+j);
 *(*(h+2)+6+j)=*(*(h+4)+8-3*j);
 *(*(h+4)+8-3*j)=*(*(h+3)+2-j);
 *(*(h+3)+2-j)=*(*(h+5)+3*j);
 *(*(h+5)+3*j)=temp;
 for(i=0;i<=2;i++)
 {
 t1[j][i]=*(*(h)+3*j+i);
 }
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h)+3*i+j)=t1[2-j][i];
 }
 }
 def();
 setcolor(RED);
 outtextxy(435,460,"CLOCKWISE FRONT");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }


 f2(int **h)
 {
 int temp,i,j,t1[3][3];
 as=as+1;
 //if(bbb==1)
 //frontrot();
 for(j=0;j<=2;j++)
 {
 temp=*(*(h+2)+6+j);
 *(*(h+2)+6+j)=*(*(h+5)+3*j);
 *(*(h+5)+3*j)=*(*(h+3)+2-j);
 *(*(h+3)+2-j)=*(*(h+4)+8-3*j);
 *(*(h+4)+8-3*j)=temp;
 for(i=0;i<=2;i++)
 {
 t1[j][i]=*(*(h)+3*j+i);
 }
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h)+3*i+j)=t1[j][2-i];
 }
 }
 def();
 setcolor(RED);
 outtextxy(420,460,"ANTI CLOCKWISE FRONT");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }



 r1(int **h)
 {
 int temp,i,k,j,t1[3][3],**h2;
 as=as+1;
 for(j=0;j<=2;j++)
 {
 temp=*(*(h+2)+2+3*j);
 *(*(h+2)+2+3*j)=*(*(h)+2+3*j);
 *(*(h)+2+3*j)=*(*(h+3)+2+3*j);
 *(*(h+3)+2+3*j)=*(*(h+1)+6-3*j);
 *(*(h+1)+6-3*j)=temp;
 for(i=0;i<=2;i++)
 t1[i][j]=*(*(h+5)+3*i+j);
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h+5)+3*i+j)=t1[2-j][i];
 }}
 def();
 setcolor(RED);
 outtextxy(435,460,"CLOCKWISE RIGHT");
 delay(500+10*md);
 setcolor(15);
 setcolor(WHITE);
 //if(bbb==1)
 //lr(2,1,h);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }

 r2(int **h)
 {
 int temp,i,j,t1[3][3];
 as=as+1;
 for(j=0;j<=2;j++)
 {
 temp=*(*(h+2)+2+3*j);
 *(*(h+2)+2+3*j)=*(*(h+1)+6-3*j);
 *(*(h+1)+6-3*j)=*(*(h+3)+2+3*j);
 *(*(h+3)+2+3*j)=*(*(h)+2+3*j);
 *(
 *(h)+2+3*j)=temp;
 for(i=0;i<=2;i++)
 t1[i][j]=*(*(h+5)+3*i+j);
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h+5)+3*i+j)=t1[j][2-i];
 }}
 def();
 setcolor(RED);
 outtextxy(420,460,"ANTI CLOCKWISE RIGHT");
 delay(500+10*md);
 setcolor(15);
// if(bbb==1)
 //lr(2,2,h);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }


 l1(int **h)
 {
 int temp,i,j,t1[3][3];
 as=as+1;
 //if(bbb==1)
 //lr(1,2,h);
 for(j=0;j<=2;j++)
 {
 temp=*(*(h+2)+3*j);
 *(*(h+2)+3*j)=*(*(h+1)+8-3*j);
 *(*(h+1)+8-3*j)=*(*(h+3)+3*j);
 *(*(h+3)+3*j)=*(*(h)+3*j);
 *(*(h)+3*j)=temp;
 for(i=0;i<=2;i++)
 t1[i][j]=*(*(h+4)+3*i+j);
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h+4)+3*i+j)=t1[2-j][i];
 }}
 def();
 setcolor(RED);
 outtextxy(435,460,"CLOCKWISE LEFT");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }


 l2(int **h)
 {
 int temp,i,j,t1[3][3];
 as=as+1;
 //if(bbb==1)
 //lr(1,1,h);
 for(j=0;j<=2;j++)
 {
 temp=*(*(h+2)+3*j);
 *(*(h+2)+3*j)=*(*h+3*j);
 *(*(h)+3*j)=*(*(h+3)+3*j);
 *(*(h+3)+3*j)=*(*(h+1)+8-3*j);
 *(*(h+1)+8-3*j)=temp;
 for(i=0;i<=2;i++)
 t1[i][j]=*(*(h+4)+3*i+j);
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h+4)+3*i+j)=t1[j][2-i];
 }}
 def();
 setcolor(RED);
 outtextxy(420,460,"ANTI CLOCKWISE LEFT");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }


 u1(int **h)
 {
 int temp,i,j,t1[3][3];
 as=as+1;
 for(j=0;j<=2;j++)
 {
 temp=*(*h+j);
 *(*h+j)=*(*(h+5)+j);
 *(*(h+5)+j)=*(*(h+1)+j);
 *(*(h+1)+j)=*(*(h+4)+j);
 *(*(h+4)+j)=temp;
 for(i=0;i<=2;i++)
 t1[i][j]=*(*(h+2)+3*i+j);
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h+2)+3*i+j)=t1[2-j][i];
 }
 }
 def();
 setcolor(RED);
 outtextxy(435,460,"CLOCKWISE UP");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }



 u2(int **h)
 {
 int temp,i,j,t1[3][3];
 as=as+1;
 for(j=0;j<=2;j++)
 {
 temp=*(*h+j);
 *(*h+j)=*(*(h+4)+j);
 *(*(h+4)+j)=*(*(h+1)+j);
 *(*(h+1)+j)=*(*(h+5)+j);
 *(*(h+5)+j)=temp;
 for(i=0;i<=2;i++)
 t1[i][j]=*(*(h+2)+3*i+j);
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h+2)+3*i+j)=t1[j][2-i];
 }
 }
 def();
 setcolor(RED);
 outtextxy(420,460,"ANTI CLOCKWISE UP");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }



 do1(int **h)
 {
 int temp,i,j,t1[3][3];
 as=as+1;
 for(j=0;j<=2;j++)
 {
 temp=*(*h+6+j);
 *(*h+6+j)=*(*(h+4)+6+j);
 *(*(h+4)+6+j)=*(*(h+1)+6+j);
 *(*(h+1)+6+j)=*(*(h+5)+6+j);
 *(*(h+5)+6+j)=temp;
 for(i=0;i<=2;i++)
 t1[i][j]=*(*(h+3)+3*i+j);
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h+3)+3*i+j)=t1[2-j][i];
 }
 }
 def();
 setcolor(RED);
 outtextxy(435,460,"CLOCKWISE DOWN");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }


 do2(int **h)
 {
 int temp,i,j,t1[3][3];
  as=as+1;
 for(j=0;j<=2;j++)
 {
 temp=*(*h+6+j);
 *(*h+6+j)=*(*(h+5)+6+j);
 *(*(h+5)+6+j)=*(*(h+1)+6+j);
 *(*(h+1)+6+j)=*(*(h+4)+6+j);
 *(*(h+4)+6+j)=temp;
 for(i=0;i<=2;i++)
 t1[i][j]=*(*(h+3)+3*i+j);
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h+3)+3*i+j)=t1[j][2-i];
 }
 }
 def();
 setcolor(RED);
 outtextxy(420,460,"ANTI CLOCKWISE DOWN");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }


 b1(int **h)
 {
 int temp,t1[3][3],i,j;
  as=as+1;
 for(j=0;j<=2;j++)
 {
 temp=*(*(h+2)+j);
 *(*(h+2)+j)=*(*(h+5)+2+3*j);
 *(*(h+5)+2+3*j)=*(*(h+3)+8-j);
 *(*(h+3)+8-j)=*(*(h+4)+6-3*j);
 *(*(h+4)+6-3*j)=temp;
 for(i=0;i<=2;i++)
 {
 t1[j][i]=*(*(h+1)+3*j+i);
 }
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h+1)+3*i+j)=t1[2-j][i];
 }
 }
 def();
 setcolor(RED);
 outtextxy(435,460,"CLOCKWISE BACK");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }





 b2(int **h)
 {
 int temp,t1[3][3],i,j;
 as=as+1;
 for(j=0;j<=2;j++)
 {
 temp= *(*(h+2)+j);
 *(*(h+2)+j)=*(*(h+4)+3*(2-j));
 *(*(h+4)+3*(2-j))=*(*(h+3)+8-j);
 *(*(h+3)+8-j)=*(*(h+5)+2+3*j);
 *(*(h+5)+2+3*j)=temp;
 for(i=0;i<=2;i++)
 {
 t1[j][i]=*(*(h+1)+3*j+i);
 }
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h+1)+j+3*i)=t1[j][2-i];
 }
 }
 def();
 setcolor(RED);
 outtextxy(420,460,"ANTI CLOCKWISE BACK");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }




 x1(int **h)
 {
 int i,j,temp,t1[3][3],t2[3][3];
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 temp=*(*(h+2)+j+3*i);
 *(*(h+2)+j+3*i)=*(*(h)+j+3*i);
 *(*(h)+j+3*i)=*(*(h+3)+j+3*i);
 *(*(h+3)+j+3*i)=*(*(h+1)+8-3*i-j);
 *(*(h+1)+8-3*i-j)=temp;
 t2[i][j]=*(*(h+5)+3*i+j);
 t1[i][j]=*(*(h+4)+3*i+j);
 }}
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h+5)+3*i+j)=t2[2-j][i];
 *(*(h+4)+3*i+j)=t1[j][2-i];
 }}
 def();
 setcolor(RED);
 outtextxy(425,460,"CLOCKWISE ABOUT X AXIS");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }

 x2(int **h)
 {
 int temp,i,j,t1[3][3],t2[3][3];
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 temp=*(*(h+2)+j+3*i);

 *(*(h+2)+j+3*i)=*(*(h+1)+8-3*i-j);
 *(*(h+1)+8-3*i-j)=*(*(h+3)+j+3*i);
 *(*(h+3)+j+3*i)=*(*(h)+j+3*i);
 *(*(h)+j+3*i)=temp;
 t2[i][j]=*(*(h+5)+3*i+j);
 t1[i][j]=*(*(h+4)+3*i+j);
 }}
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h+5)+3*i+j)=t2[j][2-i];
 *(*(h+4)+3*i+j)=t1[2-j][i];
 }}
 def();
 setcolor(RED);
 outtextxy(415,460,"ANTI CLOCKWISE - X AXIS");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }



 y1(int **h)
 {
 int temp,i,j,t1[3][3],t2[3][3];
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 temp=*(*h+j+3*i);
 *(*h+j+3*i)=*(*(h+5)+j+3*i);
 *(*(h+5)+j+3*i)=*(*(h+1)+j+3*i);
 *(*(h+1)+j+3*i)=*(*(h+4)+j+3*i);
 *(*(h+4)+j+3*i)=temp;
 t1[i][j]=*(*(h+2)+3*i+j);
 t2[i][j]=*(*(h+3)+3*i+j);
 }}
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h+3)+3*i+j)=t2[j][2-i];
 *(*(h+2)+3*i+j)=t1[2-j][i];
 }
 }
 def();
 setcolor(RED);
 outtextxy(425,460,"CLOCKWISE ABOUT Y AXIS");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }




 y2(int **h)
 {
 int temp,i,j,t1[3][3],t2[3][3];
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 temp=*(*h+j+3*i);
 *(*h+j+3*i)=*(*(h+4)+j+3*i);
 *(*(h+4)+j+3*i)=*(*(h+1)+j+3*i);
 *(*(h+1)+j+3*i)=*(*(h+5)+j+3*i);
 *(*(h+5)+j+3*i)=temp;
 t2[i][j]=*(*(h+2)+3*i+j);
 t1[i][j]=*(*(h+3)+3*i+j);
 }
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h+2)+3*i+j)=t2[j][2-i];
 *(*(h+3)+3*i+j)=t1[2-j][i];
 }
 }
 def();
 setcolor(RED);
 outtextxy(415,460,"ANTI CLOCKWISE - Y AXIS");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }





 z1(int **h)
 {
 int temp,i,j,t1[3][3],t2[3][3];
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 temp=*(*(h+2)+j+3*i);
 *(*(h+2)+3*i+j)=*(*(h+4)+6-3*j+i);
 *(*(h+4)+6-3*j+i)=*(*(h+3)+8-j-3*i);
 *(*(h+3)+8-j-3*i)=*(*(h+5)+3*j+2-i);
 *(*(h+5)+3*j+2-i)=temp;
 t1[j][i]=*(*(h)+3*j+i);
 t2[j][i]=*(*(h+1)+3*j+i);
 }
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h)+3*i+j)=t1[2-j][i];
 *(*(h+1)+3*i+j)=t2[j][2-i];
 }
 }
 def();
 setcolor(RED);
 outtextxy(425,460,"CLOCKWISE ABOUT Z AXIS");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }





 z2(int **h)
 {
 int temp,i,j,t1[3][3],t2[3][3];
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 temp=*(*(h+2)+3*i+j);
 *(*(h+2)+3*i+j)=*(*(h+5)+3*j+2-i);
 *(*(h+5)+3*j+2-i)=*(*(h+3)+8-j-3*i);
 *(*(h+3)+8-j-3*i)=*(*(h+4)+6-3*j+i);
 *(*(h+4)+6-3*j+i)=temp;
 t2[j][i]=*(*(h)+3*j+i);
 t1[j][i]=*(*(h+1)+3*j+i);
 }
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 *(*(h)+3*i+j)=t2[j][2-i];
 *(*(h+1)+3*i+j)=t1[2-j][i];
 }
 }
 def();
 setcolor(RED);
 outtextxy(415,460,"ANTI CLOCKWISE - Z AXIS");
 delay(500+10*md);
 setcolor(15);
 pol(h);
 color(h);
 if(xx==1)
 getch();
 return(0);
 }



pol(int **h)

{
 int i,j,x;
 int p1[9][8]=  {200,200,220,180,270,180,250,200,
		 250,200,270,180,320,180,300,200,
		 300,200,320,180,370,180,350,200,


		 220,180,240,160,290,160,270,180,
		 270,180,290,160,340,160,320,180,
		 320,180,340,160,390,160,370,180,


		 240,160,260,140,310,140,290,160,
		 290,160,310,140,360,140,340,160,
		 340,160,360,140,410,140,390,160};


 int p2[9][8]= {350,200,370,180,370,230,350,250,
		370,180,390,160,390,210,370,230,
		390,160,410,140,410,190,390,210,

		350,250,370,230,370,280,350,300,
		370,230,390,210,390,260,370,280,
		390,210,410,190,410,240,390,260,

		350,300,370,280,370,330,350,350,
		370,280,390,260,390,310,370,330,
		390,260,410,240,410,290,390,310};



 int p3[9][8]=  {206,198,222,182,264,182,248,198,
		 256,198,272,182,314,182,298,198,
		 306,198,322,182,364,182,348,198,


		 226,178,242,162,284,162,268,178,
		 276,178,292,162,334,162,318,178,
		 326,178,342,162,384,162,368,178,


		 246,158,262,142,304,142,288,158,
		 296,158,312,142,354,142,338,158,
		 346,158,362,142,404,142,388,158};


 int p4[9][8]= {353,201,367,187,367,228,353,242,
		373,181,387,167,387,208,373,222,
		393,161,407,147,407,188,393,202,

		353,251,367,237,367,278,353,292,
		373,231,387,217,387,258,373,272,
		393,211,407,197,407,238,393,252,

		353,301,367,287,367,328,353,342,
		373,281,387,267,387,308,373,322,
		393,261,407,247,407,288,393,302};

 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 setfillstyle(1,0);
 fillpoly(4,p1[3*(2-i)+j]);
 setfillstyle(1,*(*(h+2)+3*i+j));
 fillpoly(4,p3[3*(2-i)+j]);
 setfillstyle(1,0);
 fillpoly(4,p2[3*i+j]);
 setfillstyle(1,*(*(h+5)+3*i+j));
 fillpoly(4,p4[3*i+j]);
 }
 }
 setcolor(0);
 i=0;
 while(i!=8)
 {
 for(j=0;j<=8;j++)
 {
 line(p1[j][i],p1[j][i+1],p3[j][i],p3[j][i+1]);
 line(p2[j][i],p2[j][i+1],p4[j][i],p4[j][i+1]);
 }
 i=i+2;
 }
 setcolor(WHITE);
 return(0);
 }



color(int **h )
{
int i,j,q,k;
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
 setfillstyle(1,BLACK);
 bar3d(200+50*(j),200+50*(i),250+50*(j),250+50*(i),0,1);
 setfillstyle(1,*(*(h)+3*i+j));
 bar3d(204+50*(j),204+50*(i),246+50*(j),246+50*(i),0,1);
 setcolor(0);
 for(k=0;k<2;k++)
 {
 line(200+50*j+46*k,200+50*i+46*k,204+50*j+46*k,204+50*i+46*k);
 line(250+50*j-46*k,200+50*i+46*k,246+50*j-46*k,204+50*i+46*k);
 }
 setcolor(WHITE);
 if(zzz!=1)
 for(q=0;q<6;q++)
 {
 setfillstyle(1,*(*(h+q)+3*i+j));
 bar3d(10+25*(j)+q*100,10+25*(i),35+25*(j)+(q)*100,35+25*(i),0,1);
 }
 }
 }
 return(0);
 }




restrictmptr(int x1,int y1,int x2,int y2)
{
i.x.ax=7;
i.x.cx=x1;
i.x.dx=x2;
int86(0x33,&i,&o);
i.x.ax=8;
i.x.cx=y1;
i.x.dx=y2;
int86(0x33,&i,&o);
return(0);
}



out1()
{
 setfillstyle(6,6);
 bar3d(30,420,60,450,0,1);
 bar3d(30,220,60,250,0,1);
 bar3d(30,320,60,350,0,1);
 outtextxy(10,410,"  Z-AXIS ");
 outtextxy(10,310,"  Y-AXIS" );
 outtextxy(10,210,"  X-AXIS");
 return(0);
 }





out2()
{
 setfillstyle(6,6);
 bar3d(550,220,580,250,0,1);
 bar3d(550,280,580,310,0,1);
 bar3d(550,340,580,370,0,1);
 bar3d(550,400,580,430,0,1);
 bar3d(500,400,530,430,0,1);
 bar3d(500,340,530,370,0,1);
 outtextxy(530,390,"    L");
 outtextxy(530,330,"    U ");
 outtextxy(530,270,"    F" );
 outtextxy(530,210,"    R");
 outtextxy(500,390,"  D");
 outtextxy(500,330,"  B");
 return(0);
}

 welcome()
 {
 cleardevice();
 settextstyle(3,0,5);
 outtextxy(10,100," Programmed by:-");
 outtextxy(50,250,"ANKITA MEHTA");
 outtextxy(50,300,"CHIRAG DUA");
 outtextxy(50,350,"3rd Yr. ECE");
 outtextxy(50,400,"C.R.S.C.E.,Murthal");
 getch();
 return(0);
 }


 def()
 {
 setfillstyle(0,0);
 bar3d(400,450,625,475,0,0);
 bar3d(240,365,325,380,0,0);
 setcolor(GREEN);
 sprintf(msg,"STEPS:%d",as);
 outtextxy(250,370,msg);
 setcolor(WHITE);
 return(0);
 }

rotor()
{
   int i,j;
   int p1[3][10]={ 250,200,325,200,355,170,280,170,250,200,
		  325,200,355,170,355,245,325,275,325,200,
		  250,200,325,200,325,275,250,275,250,200};
   int p2[3][10]={ 300,200,355,180,355,260,300,275,300,200,
		  250,180,300,200,300,275,250,260,250,180,
		  250,180,300,200,355,180,300,160,250,180};

   int p3[3][10]={ 250,170,325,170,355,200,280,200,250,170,
		  250,170,280,200,280,275,250,245,250,170,
		  280,200,355,200,355,275,280,275,280,200};

   int p4[2][10]={ 260,200,345,200,345,275,260,275,260,200,
		  260,200,345,200,340,165,265,165,260,200};

   setfillstyle(4,4);
   while(kbhit()==0)
   {
   for(i=0;i<3;i++)
   fillpoly(5,p1[i]);
   delay(100);
   setfillstyle(4,4);
   bar3d(230,150,370,290,0,0);
   setfillstyle(7,1);
   for(i=0;i<3;i++)
   fillpoly(5,p2[i]);
   delay(100);
   setfillstyle(4,4);
   bar3d(230,150,370,290,0,0);
   setfillstyle(7,1);
   for(i=0;i<3;i++)
   fillpoly(5,p3[i]);
   delay(100);
   setfillstyle(4,4);
   bar3d(230,150,370,290,0,0);
   setfillstyle(7,1);
   for(i=0;i<2;i++)
   fillpoly(5,p4[i]);
   delay(100);
   setfillstyle(4,4);
   bar3d(230,150,370,290,0,0);
   setfillstyle(7,1);
   }
   return 0;
}


sd()/* for speed set up*/
{
   int a,b,c,e=1;
   setfillstyle(4,4);
   settextstyle(0,0,1);
   outtextxy(598,280,"MAX");
   outtextxy(598,420,"MIN");
   bar3d(600,300,620,400,0,0);
   setfillstyle(8,8);
   fillellipse(610,350+md,10,5);
   //showmouseptr();
   while(1)
   {
   showmouseptr();
   getmousepos(&c,&a,&b);
   if(a<=600||a>=620||b<=300||b>=400)
   return(0);
   e=1;
   if(a>=600&&a<=620&&b>=300&&b<=400&&c==1)
   {
   md=b-350;
   if(md>=50)
   md=50;
   if(md<=-50)
   md=-50;
   e=0;
   }
   if(a>=598&&a<=620&&b>=280&&b<=300&&c==1)
   {
   if(md>=-45)
   md=md-5;
   e=0;
   }
   if(a>=598&&a<=620&&b>=400&&b<=430&&c==1)
   {
   if(md<=45)
   md=md+5;
   e=0;
   }
   if(e==0)
   {
   hidemptr();
   setcolor(WHITE);
   setfillstyle(4,4);
   bar3d(600,300,620,400,0,0);
   setfillstyle(8,8);
   if(md>40)
   md=40;
   if(md<-40)
   md=-40;
   setcolor(BLACK);
   fillellipse(610,350+md,10,5);
   setcolor(WHITE);
   delay(50);
   }
   }
  }




  pwd()
  {
  int i,a,b,c,y1=0,y2=0,y=0,y3=0,a1,b1;
  prt();
  settextstyle(4,0,4);

  while(1)
  {
  showmouseptr();
  getmousepos(&c,&a,&b);
  if(a>240&&a<360&&b>175&&b<230)
  {
  if(y==0)
  {
  hidemptr();
  setfillstyle(8,10);
  fillellipse(300,200,70,25);
  outtextxy(250,177,"GAME");
  showmouseptr();
  }
  if(c==1)
  {
  delay(250);
  hidemptr();
  game();
  delay(250);
  setcolor(WHITE);
  prt();
  }
  y=1;
  }
  else
  {
  if(y==1)
  {
  hidemptr();
  setfillstyle(8,1);
  fillellipse(300,200,70,25);
  outtextxy(250,177,"GAME");
  showmouseptr();
  y=0;
  }
  }

  if(a>240&&a<360&&b>235&&b<290)
  {
  if(y1==0)
  {
  hidemptr();
  setfillstyle(8,10);
  fillellipse(300,260,70,25);
  outtextxy(250,237,"CODE");
  showmouseptr();
  }
  if((c==1)||(kbhit()==13))
  {
  pswd();
  prt();
  }
  y1=1;
  }
  else
  {
  if(y1==1)
  {
  hidemptr();
  setfillstyle(8,1);
  fillellipse(300,260,70,25);
  outtextxy(250,237,"CODE");
  showmouseptr();
  y1=0;
  }
  }

  if(a>240&&a<360&&b>295&&b<350)
  {
  if(y2==0)
  {
  hidemptr();
  setfillstyle(8,10);
  fillellipse(300,320,70,25);
  outtextxy(250,297,"HELP");
  showmouseptr();
  }
  if(c==1)
  {
  hidemptr();
  delay(250);
  help();
  delay(250);
  showmouseptr();
  setcolor(WHITE);
  outtextxy(10,50,"C R A Z Y  C U B E S");
  prt();
  }
  y2=1;
  }
  else
  {
  if(y2==1)
  {
  hidemptr();
  setfillstyle(8,1);
  settextstyle(4,0,4);
  fillellipse(300,320,70,25);
  outtextxy(250,297,"HELP");
  showmouseptr();
  y2=0;
  }
  }

  if(a>240&&a<360&&b>355&&b<410)
  {
  if(y3==0)
  {
  hidemptr();
  setfillstyle(8,10);
  fillellipse(300,380,70,25);
  outtextxy(250,357,"QUIT");
  showmouseptr();
  }
  if(c==1)
  {
  return(0);
  }
  y3=1;
  }
  else
  {
  if(y3==1)
  {
  hidemptr();
  setfillstyle(8,1);
  settextstyle(4,0,4);
  fillellipse(300,380,70,25);
  outtextxy(250,357,"QUIT");
  showmouseptr();
  y3=0;
  }
  }
  }
  }


  pswd()
  {
  int i=0;
  char n[40];
  int p[12]=CODE;
  struct time t;
  hidemptr();
  cleardevice();
  getch();
  gotoxy(10,10);
  printf("PLEASE ENTER PASSWORD....    ");
  while((n[i]=getch())!=13)
  {
  if(i>15)
  break;
  if(n[i]==8)
  {
  if(i>=0)
  {
  printf("\b \b");
  i=i-1;
  }
  }
  else
  {
  printf("*");
  i++;
  }
  }
  for(i=0;i<LEN;i++)
  {
  if(n[i]!=p[i])
  {
  setfillstyle(7,6);
  while(kbhit()==0)
  {
  bar3d(100,200,500,400,0,1);
  delay(500);
  settextstyle(1,0,3);
  outtextxy(170,250, "  ACCESS DENIED");
  delay(500);
  outtextxy(110,330,"  PASSWORD UNATHORISED");
  delay(500);
  }
  prt();
  return(0);
  }
  }
  printf("\n\n\n\t\tCONGRATULATIONS !VALID PASSWORD!");
  delay(200);
  printf("\n\t\tCODE LOADING......\n\t\tPLEASE WAIT....");
  delay(500);
  pot();
  cleardevice();
  return(0);
  }



  prt()
  {
  cleardevice();
  setbkcolor(RED);
  settextstyle(4,0,5);
  setfillstyle(8,1);
  fillellipse(300,200,70,25);
  fillellipse(300,260,70,25);
  fillellipse(300,320,70,25);
  fillellipse(300,380,70,25);
  setcolor(1);
  outtextxy(10,50," C R A Z Y   C U B E S");
  setcolor(WHITE);
  settextstyle(4,0,4);
  outtextxy(250,177,"GAME");
  outtextxy(250,237,"CODE");
  outtextxy(250,297,"HELP");
  outtextxy(250,357,"QUIT");
  return(0);
  }
  pot()
 {
 FILE *fp,*ft;
 char ch,p[10];
 int d;
 cleardevice();
 setbkcolor(BLUE);
 setfillstyle(8,8);
 settextstyle(3,0,3);
 while(kbhit()==0)
 {
 bar3d(100,200,530,300,0,1);
 delay(500);
 outtextxy(110,240,"  CODE IS GOING TO BE DISPLAYED");
 delay(500);
 }
 getch();
 cleardevice();
 fp=fopen("SUNIL.bak","r");
 while((ch=fgetc(fp))!=EOF)
 {
 if(kbhit()==0)
 printf("%c",ch);
 }
 fclose(fp);
 clrscr();
 cleardevice();
 getch();
 printf("  WOULD YOU LIKE TO COPY THIS CODE TO ANOTHER DESTINATION IN YOUR COMPUTER");
 printf("\n  IF NO ENTER \"1\" \aIF YES ENTER 123");
 scanf("%d",&d);
 if(d==123)
 {
 printf("\t\aPLEASE ENTER DESTINATION...\a\t");
 scanf("%s",&p);
 ft=fopen(p,"w");
 fp=fopen("sunil.bak","r");
 while((ch=fgetc(fp))!=EOF)
 fputc(ch,ft);
 fclose(fp);
 fclose(ft);
 getch();
 }
 return(0);
 }



play(int **q2)
{
int i,j,y=2,k,c,s,d,f[3][3],b[3][3],t[3][3],bt[3][3],l[3][3],r[3][3],*h[6],g=2;
time_t pp;
for(i=0;i<=2;i++)
{
for(j=0;j<=2; j++)
{
f[i][j]=*(*q2+3*i+j);
b[i][j]=*(*(q2+1)+3*i+j);
t[i][j]=*(*(q2+2)+3*i+j);
bt[i][j]=*(*(q2+3)+3*i+j);
l[i][j]=*(*(q2+4)+3*i+j);
r[i][j]=*(*(q2+5)+3*i+j);
}}
h[0]=&f[0][0];
h[1]=&b[0][0];
h[2]=&t[0][0];
h[3]=&bt[0][0];
h[4]=&l[0][0];
h[5]=&r[0][0];
cleardevice();
settextstyle(0,0,1);
outtextxy(598,280,"MAX");
outtextxy(598,420,"MIN");
bar3d(600,300,620,400,0,0);
setfillstyle(8,8);
fillellipse(610,350,10,5);
scrl();
md=-50;
if(bbb==1)
{
hidemptr();
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
f[i][j]=0;
b[i][j]=1;
t[i][j]=2;
bt[i][j]=12;
l[i][j]=14;
r[i][j]=4;
}
pol(&h[0]);
color(&h[0]);
for(i=0;i<pp%21;i++)
{
f1(&h[0]);
b1(&h[0]);
u2(&h[0]);
l1(&h[0]);
r2(&h[0]);
do2(&h[0]);
}
}
showmouseptr();
pol(&h[0]);
color(&h[0]);
as=0;
md=0;
def();

scrl();
while(1)
{
if(y==0)
out1();
if(g==0)
out2();

while(1)
{
getmousepos(&k,&c,&d);
{
if(c>=598&&c<=620&&d>=280&&d<=430&&(k&1)==1)
sd();
}
if(c>=270&&c<=330&&d>=450&&d<=460&&(k&1)==1)
{
bbb=0;
return(0);
}
 showmouseptr();
 if(c>=0&&c<=110&&d>=125&&d<=145&&(k&1)==1)
 {
 y=0;
 break;
 }
 if(c>=500&&c<=620&&d>=125&&d<=145&&(k&1)==1)
 {
 g=0;
 break;
 }

 if(y==0)
 {
 if(c>=30&&c<=60&&d>=220&&d<=250&&(k&1)==1)//* rot about x -axis -c
 {
 x1(&h[0]);
 break;
 }
  if(c>=30&&c<=60&&d>=220&&d<=250&&(k&2)==2)//*rot about x axis a-c
 {
 x2(&h[0]);
 break;
 }
 if(c>=30&&c<=60&&d>=320&&d<=350&&(k&1)==1)//*rotation about y -axis- c
 {
 y1(&h[0]);
 break;
 }

 if(c>=30&&c<=60&&d>=320&&d<=350&&(k&2)==2)//*rot. about y axis a-c
 {
 y2(&h[0]);
 break;
 }
 }
 if(c>=30&&c<=60&&d>=420&&d<=450&&(k&1)==1)//* z axis
 {
 z1(&h[0]);
 break;
 }
 if(c>=30&&c<=60&&d>=420&&d<=450&&(k&2)==2)//* z  ac
 {
 z2(&h[0]);
 break;
 }


 if(g==0)
 {
 if(c>=550&&c<=580&&d>=280&&d<=310&&(k&1)==1) //* FRONT C
 {
 f1(&h[0]);
 break;
 }
 if(c>=550&&c<=580&&d>=280&&d<=310&&(k&2)==2) //* FRONT A-C
 {
 f2(&h[0]);
 break;
 }
 if(c>=550&&c<=580&&d>=220&&d<=250&&(k&1)==1) //* right c
 {
 r1(&h[0]);
 break;
 }
if(c>=550&&c<=580&&d>=220&&d<=250&&(k&2)==2)//* right a-c
{
r2(&h[0]);
break;
}



if(c>=550&&c<=580&&d>=400&&d<=430&&(k&1)==1)//* left c
{
l1(&h[0]);
break;
}

if(c>=550&&c<=580&&d>=400&&d<=430&&(k&2)==2)//* left a-c
{
l2(&h[0]);
break;
 }


 if(c>=550&&c<=580&&d>=340&&d<=370&&(k&1)==1)//* up c
 {
 u1(&h[0]);
 break;
 }

 if(c>=550&&c<=580&&d>=340&&d<=370&&(k&2)==2)
 {
 u2(&h[0]);
 break;
 }

 if(c>=500&&c<=530&&d>=400&&d<=430&&(k&1)==1)//* down  c
 {
 do1(&h[0]);
 break;
 }

 if(c>=500&&c<=530&&d>=400&&d<=430&&(k&2)==2)//* down a c
 {
 do2(&h[0]);
 break;
 }

 if(c>=500&&c<=530&&d>=340&&d<=370&&(k&1)==1) //* back C
 {
  b1(&h[0]);
  break;
 }





 if(c>=500&&c<=530&&d>=340&&d<=370&&(k&2)==2)//* back a C
 {
 b2(&h[0]);
 break;
 }
 for(s=0;s<=1;s++)
 if(c>=(130+200*s)&&c<=(230+200*s)&&d>=390&&d<=410)
 {
 hidemptr();
 pp=move(180+200*s,400,12+s*2);
 switch(pp)
 {
 case 13:
 {
 hidemptr();
 cleardevice();
 sol1(h);
 cleardevice();
 scrl();
 showmouseptr();
 break;
 }
 case 14:
 {
 return(0);
 }
 case 15:
 {
 cleardevice();
 setcolor(WHITE);
 help();
 break;
 }
 }
 showmouseptr();
 setcolor(WHITE);
 }
 if(c>=230&&c<=330&&d>=440&&d<=460)
 {
 hidemptr();
 move(280,450,13);
 showmouseptr();
 setcolor(WHITE);
 }
 }
 }
 }
 }




frontrot(int a/*for clock/a-clock.*/)
{
int q=90-90*a,p[2][9][8],j,i,p1[9][8],bs=275,bd=275;
while(q!=90*a)
{
for(i=0;i<2;i++)
{
p[i][0][0]=bs-(75-4*i)*1.414*cos((q+45)*3.14/180);
p[i][0][1]=bd-(75-4*i)*1.414*sin((q+45)*3.14/180);
p[i][0][2]=bs-(79.05-4*i)*cos((q+71.56-4*i)*3.14/180);
p[i][0][3]=bd-(79.05-4*i)*sin((q+71.56-4*i)*3.14/180);

p[i][0][4]=bs-(25+4*i)*1.414*cos((q+45)*3.14/180)-4*i;
p[i][0][5]=bd-(25+4*i)*1.414*sin((q+45)*3.14/180)-4*i;
p[i][0][6]=bs-(79.05-4*i)*cos((q+18.43+4*i)*3.14/180)+4*i;
p[i][0][7]=bd-(79.05-4*i)*sin((q+18.43+4*i)*3.14/180)-4*i;

p[i][1][0]=p[i][0][6];
p[i][1][1]=p[i][0][7];
p[i][1][2]=p[i][0][4];
p[i][1][3]=p[i][0][5];

p[i][1][4]=bs-25*1.414*cos((q-45)*3.14/180)-4*i;
p[i][1][5]=bd-25*1.414*sin((q-45)*3.14/180)-4*i;
p[i][1][6]=bs-79.05*cos((q-18.43)*3.14/180)+4*i;
p[i][1][7]=bd-79.05*sin((q-18.43)*3.14/180)-4*i;


p[i][2][0]=p[i][1][6]+4*i;
p[i][2][1]=p[i][1][7]+4*i;
p[i][2][2]=p[i][1][4]-4*i;
p[i][2][3]=p[i][1][5]+4*i;

p[i][2][4]=bs-79.05*cos((q-71.56)*3.14/180)-4*i;
p[i][2][5]=bd-79.05*sin((q-71.56)*3.14/180)-4*i;
p[i][2][6]=bs-75*1.414*cos((q-45)*3.14/180)+4*i;
p[i][2][7]=bd-75*1.414*sin((q-45)*3.14/180)-4*i;


p[i][3][0]=p[i][0][2]+4*i;
p[i][3][1]=p[i][0][3]+4*i;
p[i][3][2]=bs-79.05*cos((q+180-71.56)*3.14/180)-4*i;
p[i][3][3]=bd-79.05*sin((q+180-71.56)*3.14/180)+4*i;
p[i][3][4]=bs-25*1.414*cos((q+180-45)*3.14/180)-4*i;
p[i][3][5]=bd-25*1.414*sin((q+180-45)*3.14/180)-4*i;
p[i][3][6]=p[i][0][4]+4*i;
p[i][3][7]=p[i][0][5]-4*i;

p[i][4][0]=p[i][3][6]+4*i;
p[i][4][1]=p[i][3][7]+4*i;
p[i][4][2]=p[i][3][4]-4*i;
p[i][4][3]=p[i][3][5]+4*i;
p[i][4][4]=bs-25*1.414*cos((q+180+45)*3.14/180)-4*i;
p[i][4][5]=bd-25*1.414*sin((q+180+45)*3.14/180)-4*i;
p[i][4][6]=p[i][1][4]+4*i;
p[i][4][7]=p[i][1][5]-4*i;


p[i][5][0]=p[i][4][6]+4*i;
p[i][5][1]=p[i][4][7]+4*i;
p[i][5][2]=p[i][4][4]-4*i;
p[i][5][3]=p[i][4][5]+4*i;
p[i][5][4]=bs-79.05*cos((q+71.56-180)*3.14/180)-4*i;
p[i][5][5]=bd-79.05*sin((q+71.56-180)*3.14/180)-4*i;
p[i][5][6]=p[i][2][4]+4*i;
p[i][5][7]=p[i][2][5]-4*i;



p[i][6][0]=p[i][3][2]+4*i;
p[i][6][1]=p[i][3][3]+4*i;
p[i][6][2]=bs-75*1.414*cos((q+45+90)*3.14/180)-4*i;
p[i][6][3]=bd-75*1.414*sin((q+45+90)*3.14/180)+4*i;
p[i][6][4]=bs-79.05*cos((q-18.43+180)*3.14/180)-4*i;
p[i][6][5]=bd-79.05*sin((q-18.43+180)*3.14/180)-4*i;
p[i][6][6]=p[i][3][4]+4*i;
p[i][6][7]=p[i][3][5]-4*i;

p[i][7][0]=p[i][6][6]+4*i;
p[i][7][1]=p[i][6][7]+4*i;
p[i][7][2]=p[i][6][4]-4*i;
p[i][7][3]=p[i][6][5]+4*i;
p[i][7][4]=bs-79.05*cos((q+18.43+180)*3.14/180)-4*i;
p[i][7][5]=bd-79.05*sin((q+18.43+180)*3.14/180)-4*i;
p[i][7][6]=p[i][4][4]+4*i;
p[i][7][7]=p[i][4][5]-4*i;


p[i][8][0]=p[i][7][6]+4*i;
p[i][8][1]=p[i][7][7]+4*i;
p[i][8][2]=p[i][7][4]-4*i;
p[i][8][3]=p[i][7][5]+4*i;
p[i][8][4]=bs-75*1.414*cos((q+45+180)*3.14/180)-4*i;
p[i][8][5]=bd-75*1.414*sin((q+45+180)*3.14/180)-4*i;
p[i][8][6]=p[i][5][4]+4*i;
p[i][8][7]=p[i][5][5]-4*i;
}

for(i=0;i<3;i++)
{
p1[i][0]=p[0][3*i][0];
p1[i][1]=p[0][3*i][1];
p1[i][2]=p[0][3*i][0]+20;
p1[i][3]=p[0][3*i][1]-20;

p1[i][4]=p[0][3*i][2]+20;
p1[i][5]=p[0][3*i][3]-20;
p1[i][6]=p[0][3*i][2];
p1[i][7]=p[0][3*i][3];

p1[i+3][0]=p[0][6+i][2];
p1[i+3][1]=p[0][6+i][3];
p1[i+3][2]=p[0][6+i][2]+20;
p1[i+3][3]=p[0][6+i][3]-20;

p1[i+3][4]=p[0][6+i][4]+20;
p1[i+3][5]=p[0][6+i][5]-20;
p1[i+3][6]=p[0][6+i][4];
p1[i+3][7]=p[0][6+i][5];

p1[i+6][0]=p[0][i][0];
p1[i+6][1]=p[0][i][1];
p1[i+6][2]=p[0][i][0]+20;
p1[i+6][3]=p[0][i][1]-20;

p1[i+6][4]=p[0][i][6]+20;
p1[i+6][5]=p[0][i][7]-20;
p1[i+6][6]=p[0][i][6];
p1[i+6][7]=p[0][i][7];
}
if(q%10==0)
{
setcolor(0);
setfillstyle(0,0);
bar3d(148,200,200,350,0,0);
bar3d(200,350,350,450,0,0);
setcolor(WHITE);
pol1(3);
}
for(j=0;j<=8;j++)
fillpoly(4,p1[j]);

for(j=0;j<9;j++)
fillpoly(4,p[0][j]);

if(a==1)
q++;
else
q--;
}
return(0);
}




// LEFT A=1  RIGHT A=2 CLOCKWISE B=1 ANTI CLOCKWISE B=2 ADDRESS OF COLORS H


lr(int a,int b,int **h)
{
 int p5[8],i,p6[9][8],k=0,j=0,ch=280;
 int pp1[8]={300,352,370,282,500,282,450,352},c;
 int temp,t1[3][3];
 if(a==2)
 {
 ch=380;
 }
 if(b==1)
 {
 c=130;
 i=0;
 }
 else
 {
 c=0;
 i=130;
 }
 hidemptr();
 while(i!=c)
 {
 delay(10);
 if(a!=1&&(i%10==0))
 {
 pol1(a,h);
 setcolor(BLACK);
 setfillstyle(1,0);
 bar3d(357,135,410,255,0,0);
 fillpoly(4,pp1);
 bar3d(410,140,495,290,0,0);
 setcolor(WHITE);
 }
 p5[0]=ch-(109-.42*i)*cos((i-74)*3.14/180);
 p5[1]=245-(109-.42*i)*sin((i-74)*3.14/180);
 p5[2]=ch-(54+1.1*j)*cos((j+56)*3.14/180);
 p5[3]=245-(54+1.1*j)*sin((j+56)*3.14/180);
 p5[4]=ch-(109-.42*i)*cos((i-74+180)*3.14/180);
 p5[5]=245-(109-.42*i)*sin((i-74+180)*3.14/180);
 p5[6]=ch-(54+1.1*j)*cos((j+56+180)*3.14/180);
 p5[7]=245-(54+1.1*j)*sin((j+56+180)*3.14/180);

 p6[0][0]=ch-(54+1.1*j)*cos((j+56)*3.14/180);
 p6[0][1]=245-(54+1.1*j)*sin((j+56)*3.14/180);
 p6[0][2]=p6[0][0]-(p5[2]-p5[0])/3;
 p6[0][3]=p6[0][1]-(p5[3]-p5[1])/3;
 p6[0][4]=p6[0][2]-50;
 p6[0][5]=p6[0][3];
 p6[0][6]=p6[0][0]-50;
 p6[0][7]=p6[0][1];

 p6[1][0]=p6[0][2];
 p6[1][1]=p6[0][3];
 p6[1][2]=p6[0][2]-(p5[2]-p5[0])/3;
 p6[1][3]=p6[0][3]-(p5[3]-p5[1])/3;
 p6[1][4]=p6[1][2]-50;
 p6[1][5]=p6[1][3];
 p6[1][6]=p6[1][0]-50;
 p6[1][7]=p6[1][1];

 p6[2][0]=p6[1][2];
 p6[2][1]=p6[1][3];
 p6[2][2]=p6[1][2]-(p5[2]-p5[0])/3;
 p6[2][3]=p6[1][3]-(p5[3]-p5[1])/3;
 p6[2][4]=p6[2][2]-50;
 p6[2][5]=p6[2][3];
 p6[2][6]=p6[2][0]-50;
 p6[2][7]=p6[2][1];

 p6[3][0]=ch-(54+1.1*j)*cos((j+56)*3.14/180);
 p6[3][1]=245-(54+1.1*j)*sin((j+56)*3.14/180);
 p6[3][2]=p6[3][0]-50;
 p6[3][3]=p6[3][1];
 p6[3][4]=(ch-(109-.42*i)*cos((i-74+180)*3.14/180)-p6[3][0])/3+p6[3][0]-50;
 p6[3][5]=p6[3][1]-(p6[3][1]-(245-(109-.42*i)*sin((i-74+180)*3.14/180)))/3;
 p6[3][6]=p6[3][4]+50;
 p6[3][7]=p6[3][5];

 p6[4][0]=p6[3][6];
 p6[4][1]=p6[3][7];
 p6[4][2]=p6[3][4];
 p6[4][3]=p6[3][5];
 p6[4][4]=p6[4][0]+(p6[3][6]-p6[3][0])-50;
 p6[4][5]=p6[4][1]-(p6[3][1]-p6[3][7]);
 p6[4][6]=p6[4][4]+50;
 p6[4][7]=p6[4][5];

 p6[5][0]=p6[4][6];
 p6[5][1]=p6[4][7];
 p6[5][2]=p6[4][4];
 p6[5][3]=p6[4][5];
 p6[5][4]=p6[5][0]+(p6[4][6]-p6[4][0])-50;
 p6[5][5]=p6[5][1]-(p6[4][1]-p6[4][7]);
 p6[5][6]=p6[5][4]+50;
 p6[5][7]=p6[5][5];


 p6[6][0]=ch-(109-.42*i)*cos((i-74)*3.14/180);
 p6[6][1]=245-(109-.42*i)*sin((i-74)*3.14/180);
 p6[6][2]=p6[6][0]-50;
 p6[6][3]=p6[6][1];
 p6[6][4]=p6[6][0]+(p5[6]-p6[6][0])/3-50;
 p6[6][5]=p6[6][1]-(p6[6][1]-p5[7])/3;
 p6[6][6]=p6[6][4]+50;
 p6[6][7]=p6[6][5];

 p6[7][0]=p6[6][6];
 p6[7][1]=p6[6][7];
 p6[7][2]=p6[6][4];
 p6[7][3]=p6[6][5];
 p6[7][4]=p6[7][2]+(p5[6]-p6[6][0])/3;
 p6[7][5]=p6[7][3]-(p6[6][1]-p5[7])/3;
 p6[7][6]=p6[7][4]+50;
 p6[7][7]=p6[7][5];

 p6[8][0]=p6[7][6];
 p6[8][1]=p6[7][7];
 p6[8][2]=p6[7][4];
 p6[8][3]=p6[7][5];
 p6[8][4]=p6[8][2]+(p5[6]-p6[6][0])/3;
 p6[8][5]=p6[8][3]-(p6[6][1]-p5[7])/3;
 p6[8][6]=p6[8][4]+50;
 p6[8][7]=p6[8][5];
 if(i>40)
 {
 for(k=0;k<3;k++)
 {
 //setfillstyle(1,*(*(h+3)+2+3*k));
 fillpoly(4,p6[k+6]);
 }}
 if(i<40)
 {
 for(k=0;k<3;k++)
 {
 //setfillstyle(1,*(*(h+2)+2+3*k));
 fillpoly(4,p6[k+3]);
 }
 }

 for(k=0;k<3;k++)
 {
 //setfillstyle(1,*(*(h)+2+3*k));
 fillpoly(4,p6[k]);
 }
 fillpoly(4,p5);
 if(a==2)
 {
 line(p6[3][6],p6[3][7],p6[6][6],p6[6][7]);
 line(p6[4][6],p6[4][7],p6[7][6],p6[7][7]);
 line(p6[1][0],p6[1][1],p5[4]+(p5[6]-p5[4])/3,p5[5]+(p5[7]-p5[5])/3);
 line(p6[2][0],p6[2][1],p5[4]+(p5[6]-p5[4])*2/3,p5[5]+(p5[7]-p5[5])*2/3);
 setfillstyle(1,0);
 }
 if(a==1&&i%10==0)
 {
 pol1(a,h);
 setfillstyle(0,0);
 setcolor(0);
 bar3d(155,150,215,355,0,0);
 setcolor(WHITE);
 setfillstyle(1,0);
 }
 if(b==1)
 i++;
 else
 i--;
 j=i/2.6;
 }
 setcolor(0);
 setfillstyle(0,0);
 bar3d(200,130,450,350,0,0);
 setcolor(WHITE);
 showmouseptr();
 return(0);
 }

pol1(int a,int **h)
{
 int f=2,m=2,hh=2,l=2,r=0,mm=0,k=0;
 int i,j,p1[9][8]={200,200,220,180,270,180,250,200,
		 250,200,270,180,320,180,300,200,
		 300,200,320,180,370,180,350,200,



		 220,180,240,160,290,160,270,180,
		 270,180,290,160,340,160,320,180,
		 320,180,340,160,390,160,370,180,


		 240,160,260,140,310,140,290,160,
		 290,160,310,140,360,140,340,160,
		 340,160,360,140,410,140,390,160};


 int p2[9][8]= {350,200,370,180,370,230,350,250,
		370,180,390,160,390,210,370,230,
		390,160,410,140,410,190,390,210,

		350,250,370,230,370,280,350,300,
		370,230,390,210,390,260,370,280,
		390,210,410,190,410,240,390,260,

		350,300,370,280,370,330,350,350,
		370,280,390,260,390,310,370,330,
		390,260,410,240,410,290,390,310};



 int p3[9][8]=  {206,198,222,182,264,182,248,198,
		 256,198,272,182,314,182,298,198,
		 306,198,322,182,364,182,348,198,


		 226,178,242,162,284,162,268,178,
		 276,178,292,162,334,162,318,178,
		 326,178,342,162,384,162,368,178,


		 246,158,262,142,304,142,288,158,
		 296,158,312,142,354,142,338,158,
		 346,158,362,142,404,142,388,158};


 int p4[9][8]= {353,201,367,187,367,228,353,242,
		373,181,387,167,387,208,373,222,
		393,161,407,147,407,188,393,202,

		353,251,367,237,367,278,353,292,
		373,231,387,217,387,258,373,272,
		393,211,407,197,407,238,393,252,

		353,301,367,287,367,328,353,342,
		373,281,387,267,387,308,373,322,
		393,261,407,247,407,288,393,302};

if(a==3) //for front
 {
 f=1;
 m=0;
 hh=0;
 r=1;
 }

if(a==2)//for right
{
m=1;
l=1;
}
if(a==1)//for left
{
mm=1;
}
 for(i=0;i<=f;i++)
 {
 for(j=mm;j<=l;j++)
 {
 setfillstyle(1,DARKGRAY);
 fillpoly(4,p1[3*(2-i)+j]);
 setfillstyle(1,*(*(h+2)+3*i+j));
 fillpoly(4,p3[3*(2-i)+j]);
 }
 }

 if(a!=2)
 {
 for(i=0;i<=2;i++)
 {
 for(j=r;j<=2;j++)
 {
 setfillstyle(1,DARKGRAY);
 fillpoly(4,p2[3*i+j]);
 setfillstyle(1,*(*(h+5)+3*i+j));
 fillpoly(4,p4[3*i+j]);
 }
 }}
 if(hh!=0||m!=0)
 {
 for(i=0;i<=hh;i++)
 {
 for(j=mm;j<=m;j++)
 {
 setfillstyle(1,DARKGRAY);
 bar3d(200+50*(j),200+50*(i),250+50*(j),250+50*(i),0,1);
 setfillstyle(1,*(*(h)+3*i+j));
 bar3d(204+50*(j),204+50*(i),246+50*(j),246+50*(i),0,1);
 }
 }
 }
 setcolor(0);
 for(k=0;k<2;k++)
 {
 line(200+50*j+46*k,200+50*i+46*k,204+50*j+46*k,204+50*i+46*k);
 line(250+50*j-46*k,200+50*i+46*k,246+50*j-46*k,204+50*i+46*k);
 }
 setcolor(WHITE);
 setcolor(0);
 i=0;
 setcolor(WHITE);
 return(0);
 }





 game()
 {
 int a=200,b=100,i,j,p,x,y,z,k=0,k1=0,k2=0,k3=190,k4=290;
 hidemptr();
 delay(250);
 game1();
 showmouseptr();
 while(1)
 {
 showmouseptr();
 getmousepos(&x,&y,&z);
 setcolor(0);
 setfillstyle(0,0);
 k2=k2+1;
 k=k+1;
 k4=k4+1;
 if(k4>400)
 k4=-390;
 if(k>600)
 {
 k=-90;
 k2=-290;
 k4=-90;
 }
 k1=k1-1;
 k3=k3-1;
 bar3d(90+k,50,370+k,80,0,0);
 bar3d(50+k1,150,400+k1,180,0,0);
 bar3d(190+k2,250,470+k2,280,0,0);
 bar3d(100+k3,350,470+k3,380,0,0);
 bar3d(290+k4,450,570+k4,480,0,0);
 setcolor(BLUE);
 settextstyle(7,0,1);
 outtextxy(100+k,50,nm[4]);
 outtextxy(100+k1,150,nm[5]);
 outtextxy(200+k2,250,nm[6]);
 outtextxy(100+k3,350,nm[7]);
 outtextxy(300+k4,450,nm[8]);
 settextstyle(11,0,1);
 if(k1<-50)
 k1=750;
 if(k3<-300)
 k3=690;
 delay(40);
 a=200;
 b=100;
 for(i=0;i<4;i++)
 {
 if(y>(a-50)&&y<(a+50)&&z>(b-10)&&z<(b+10))
 {
 hidemptr();
 p=move(a,b,i);
 switch (p)
 {

 case 1:
 {
 setcolor(WHITE);
 hidemptr();
 delay(250);
 colfil(1);
 hidemptr();
 delay(250);
 game1();
 showmouseptr();
 showmouseptr();
 break;
 }
 case 2:
 {
 setcolor(WHITE);
 hidemptr();
 delay(250);
 colfil(2);
 hidemptr();
 delay(250);
 game1();
 showmouseptr();
 break;
 }
 case 3:
 {
 bbb=1;
 play(0);
 hidemptr();
 delay(250);
 game1();
 showmouseptr();
 break;
 }
 case 4:
 {
 return;
 }
 case 0:
 break;
 }}
 a=a+50;
 b=b+100;
 }}
 }





 move(int a,int b,int h)
 {
 int x,y,z,c,l=0,j,i;
 c=a;
 while(1)
 {
 getmousepos(&x,&y,&z);
 setcolor(0);
 setfillstyle(0,0);
 bar3d(c-65,b-15,c+65,b+15,0,0);
 setcolor(RED);
 setfillstyle(10,BLUE);
 sector(c-48,b,89,271,10,10);
 fillellipse(c+48,b,10,10);
 bar3d(c-50,b-10,c+50,b+10,0,0);
 outtextxy(c-50,b,nm[h]);
 if(y<(a-50)||y>(a+50)||z>(b+10)||z<(b-10))
 {
 showmouseptr();
 return(0);
 }
 if(x==1)
 {
 showmouseptr();
 return(h+1);
 }
 if(l<15)
 {
 c=c+1;
 l=l+2;
 }
 if(l>15)
 {
 c=c-1;
 l=l+2;
 if(l>30)
 l=0;
 }
 delay(30);
 }
 }





colfil(int hh/*for solve 2 for play 1*/)
{
 int pp,a=500,bn=300,r3=0,l3,q,c,i,j,d,x,s,f[3][3],t[3][3],bt[3][3],b[3][3],l[3][3],r[3][3],*h[6];
 cleardevice();
 setfillstyle(1,1);
 bar3d(450,150,475,175,0,1);
 setfillstyle(1,2);
 bar3d(475,150,500,175,0,1);
 setfillstyle(1,0);
 bar3d(500,150,525,175,0,1);
 setfillstyle(1,12);
 bar3d(450,175,475,200,0,1);
 setfillstyle(1,14);
 bar3d(475,175,500,200,0,1);
 setfillstyle(1,4);
 bar3d(500,175,525,200,0,1);
 sh();
 for(s=0;s<=2;s++)
 {
 setcolor(RED);
 setfillstyle(10,BLUE);
 sector(a-48,bn,89,271,10,10);
 fillellipse(a+48,bn,10,10);
 bar3d(a-50,bn-10,a+50,bn+10,0,0);
 outtextxy(a-50,bn,nm[9+s]);
 setcolor(WHITE);
 bn=bn+50;
 }
 setcolor(WHITE);
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 t[i][j]=0;
 bt[i][j]=0;
 b[i][j]=0;
 l[i][j]=0;
 f[i][j]=0;
 r[i][j]=0;
 }
 }
 h[0]=&f[0][0];
 h[1]=&b[0][0];
 h[2]=&t[0][0];
 h[3]=&bt[0][0];
 h[4]=&l[0][0];
 h[5]=&r[0][0];
 pol(&h[0]);
 color(&h[0]);
 while(1)
 {
 l3=1;
 while(l3!=0)
 {
 showmouseptr();
 getmousepos(&x,&c,&d);
 if(c>=450&&c<=475&&d>=150&&d<=175&&(x&1)==1)
 r3=1;
 if(c>=475&&c<=500&&d>=150&&d<=175&&(x&1)==1)
 r3=2;
 if(c>=500&&c<=525&&d>=150&&d<=175&&(x&1)==1)
 r3=0;
 if(c>=450&&c<=475&&d>=175&&d<=200&&(x&1)==1)
 r3=12;
 if(c>=475&&c<=525&&d>=175&&d<=200&&(x&1)==1)
 r3=14;
 if(c>=500&&c<=525&&d>=175&&d<=200&&(x&1)==1)
 r3=4;
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 for(q=0;q<6;q++)
 {
 if(c>=10+25*j+q*100&&c<=35+25*j+q*100&&d>=10+25*i&&d<=35+25*i&&(x&1)==1)
 {
 *(*(h+q)+3*i+j)=r3;
 l3=0;
 }
 }
 }
 }
 for(s=0;s<=2;s++)
 if((c>=450)&&(c<=550)&&d>=(290+50*s)&&d<=(310+50*s))
 {
 hidemptr();
 pp=move(500,300+50*s,9+s);
 switch (pp)
 {
 case 10:
 {
 colch(&h,hh);
 hidemptr();
 delay(500);
 cleardevice();
 pol(&h[0]);
 color(&h[0]);
 screen();
 showmouseptr();
 break;
 }
 case 11:
 {
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 t[i][j]=0;
 bt[i][j]=0;
 b[i][j]=0;
 l[i][j]=0;
 f[i][j]=0;
 r[i][j]=0;
 }
 }
 setcolor(WHITE);
 pol(&h[0]);
 color(&h[0]);
 break;
 }
 case 12:
 return(0);
 }
 }
 }
 hidemptr();
 pol(&h[0]);
 color(&h[0]);
 }
 }





 sh()
 {
 settextstyle(11,0,1);
 outtextxy(10,2,"  FRONT");
 outtextxy(110,2,"  BACK" );
 outtextxy(210,2,"  TOP");
 outtextxy(310,2,"  BOTTOM" );
 outtextxy(410,2,"  LEFT");
 outtextxy(510,2,"  RIGHT");
 return(0);
 }





 colch(int **h,int hh)
 {
 int i,j,k,g1[6]={0,0,0,0,0,0};
 for(k=0;k<=5;k++)
 {
 for(j=0;j<=2;j++)
 {
 for(i=0;i<=2;i++)
 {
 switch(*(*(h+k)+3*i+j))
 {
 case 0:
 {
 g1[0]=g1[0]+1;
 break;
 }
 case 1:
 {
 g1[1]=g1[1]+1;
 break;
 }
 case 2:
 {
 g1[2]=g1[2]+1;
 break;
 }
 case 4:
 {
 g1[3]=g1[3]+1;
 break;
 }
 case 12:
 {
 g1[4]=g1[4]+1;
 break;
 }
 case 14:
 {
 g1[5]=g1[5]+1;
 break;
 }
 }}}}
 box();
 setcolor(WHITE);
 cleardevice();
 if(g1[0]==9&&g1[1]==9&&g1[2]==9&&g1[3]==9&&g1[4]==9&&g1[5]==9)
 {
 if(hh==1)
 play(h);
 if(hh==2)
 sol1(h);
 }
 return(0);
 }


 box()
 {
 int i;
 delay(50);
 hidemptr();
 cleardevice();
 setcolor(WHITE);
 settextstyle(10,0,1);
 outtextxy(180,130,"CHECKING COLORS");
 line(200,200,350,200);
 line(200,216,350,216);
 arc(200,208,90,270,8);
 arc(350,208,270,90,8);
 setcolor(GREEN);
 setfillstyle(1,0);
 for(i=0;i<=9;i++)
 {
 bar3d(200+15*i,204,213+15*i,212,0,0);
 }
 setfillstyle(1,GREEN);
 for(i=0;i<=9;i++)
 {
 bar3d(200+15*i,204,213+15*i,212,0,0);
 delay(500);
 }
 return(0);
 }
 screen()
 {
 int a=500,s,bn=300;
 setfillstyle(1,1);
 bar3d(450,150,475,175,0,1);
 setfillstyle(1,2);
 bar3d(475,150,500,175,0,1);
 setfillstyle(1,0);
 bar3d(500,150,525,175,0,1);
 setfillstyle(1,12);
 bar3d(450,175,475,200,0,1);
 setfillstyle(1,14);
 bar3d(475,175,500,200,0,1);
 setfillstyle(1,4);
 bar3d(500,175,525,200,0,1);
 sh();
 for(s=0;s<=2;s++)
 {
 setcolor(RED);
 setfillstyle(10,BLUE);
 sector(a-48,bn,89,271,10,10);
 fillellipse(a+48,bn,10,10);
 bar3d(a-50,bn-10,a+50,bn+10,0,0);
 outtextxy(a-50,bn,nm[9+s]);
 setcolor(WHITE);
 bn=bn+50;
 }
 return(0);
 }


 game1()
 {
 int a=200,b=100,i,j,p,x,y,z;
 setbkcolor(BLACK);
 cleardevice();
 settextstyle(11,0,1);
 setcolor(DARKGRAY);
 setfillstyle(9,DARKGRAY);
 for(i=0;i<5;i++)
 {
 for(j=0;j<5;j++)
 {
 bar3d(150*i,100*j,150*i+40,100*j+40,20,1);
 }
 }
 for(i=0;i<4;i++)
 {
 setcolor(RED);
 setfillstyle(10,BLUE);
 sector(a-48,b,89,271,10,10);
 fillellipse(a+48,b,10,10);
 bar3d(a-50,b-10,a+50,b+10,0,0);
 outtextxy(a-50,b,nm[i]);
 a=a+50;
 b=b+100;
 }
 return(0);
 }




spdstp(int **h)/* to set the speed*/
{
int a=200,s,bn=100,c,x,d,pp=0;
hidemptr();
cleardevice();
for(s=0;s<=1;s++)
 {
 setcolor(RED);
 setfillstyle(10,BLUE);
 settextstyle(11,0,2);
 sector(a-48,bn,89,271,10,10);
 fillellipse(a+48,bn,10,10);
 bar3d(a-50,bn-10,a+50,bn+10,0,0);
 outtextxy(a-50,bn,nm[18+s]);
 setcolor(WHITE);
 bn=bn+100;
 }
 sd();
 settextstyle(11,0,3);
 outtextxy(320,240,"SET THE SPEED");
 showmouseptr();
 while(1)
 {
 getmousepos(&x,&c,&d);
 if(c>=600&&c<=620&&d>=300&&d<=400)
 sd();
 for(s=0;s<=1;s++)
 {
 if(c>=150&&c<=250&&d>=(90+100*s)&&d<=(110+100*s))
 pp=move(200,100+100*s,18+s);
 switch (pp)
 {
 case 19:
 {
 as=0;
 solvee(h);
 getch();
 return(0);
 }
 case 20:
 return(0);
 }
 }}
}





sol1(int **h)/* page before solve after col. checking*/
{
int s,a=500,bn=300,x,c,d,pp;
cleardevice();
for(s=0;s<=2;s++)
 {
 setcolor(RED);
 setfillstyle(10,BLUE);
 settextstyle(11,0,2);
 sector(a-48,bn,89,271,10,10);
 fillellipse(a+48,bn,10,10);
 bar3d(a-50,bn-10,a+50,bn+10,0,0);
 outtextxy(a-50,bn,nm[15+s]);
 setcolor(WHITE);
 bn=bn+50;
 }
pol(&h[0]);
color(&h[0]);
while(1)
{
showmouseptr();
getmousepos(&x,&c,&d);
for(s=0;s<=2;s++)
if(c>=450&&c<=550&&d>=(290+50*s)&&d<=(310+50*s))
{
pp=move(500,300+50*s,15+s);
switch (pp)
{
case 16:
{
spdstp(h);
hidemptr();
cleardevice();
bn=300;
for(s=0;s<=2;s++)
 {
 setcolor(RED);
 setfillstyle(10,BLUE);
 settextstyle(11,0,2);
 sector(a-48,bn,89,271,10,10);
 fillellipse(a+48,bn,10,10);
 bar3d(a-50,bn-10,a+50,bn+10,0,0);
 outtextxy(a-50,bn,nm[15+s]);
 setcolor(WHITE);
 bn=bn+50;
 }
 pol(&h[0]);
 color(&h[0]);
 break;
}

case 17:
{
xx=1;
md=-50;
solvee(h);
xx=0;
md=0;
return(0);
}

case 18:
{
setcolor(WHITE);
cleardevice();
return(0);
}
}
}
}
}

hmenu()
{
int i;
hidemptr();
cleardevice();
zzz=1;
showmouseptr();
for(i=0;i<4;i++)
 {
 line(130+75*i,85+75*i,235+75*i,85+75*i);
 arc(235+75*i,115+75*i,0,90,30);
 arc(130+75*i,100+75*i,90,180,15);
 line(115+75*i,100+75*i,115+75*i,125+75*i);
 arc(161+75*i,100+75*i,210,248,52);
 line(150+75*i,100+75*i,250+75*i,100+75*i);
 line(150+75*i,150+75*i,250+75*i,150+75*i);
 line(135+75*i,115+75*i,135+75*i,135+75*i);
 line(265+75*i,115+75*i,265+75*i,135+75*i);
 arc(150+75*i,115+75*i,90,180,15);
 arc(150+75*i,135+75*i,180,270,15);
 arc(250+75*i,135+75*i,270,0,15);
 arc(250+75*i,115+75*i,0,90,15);
 setbkcolor(BLACK);
 setfillstyle(1,LIGHTGRAY);
 floodfill(170+75*i,125+75*i,getmaxcolor());
 setfillstyle(1,8);
 floodfill(170+75*i,90+75*i,getmaxcolor());
 settextstyle(4,0,4);
 setcolor(BLACK);
 outtextxy(138,100,"ABOUT?");
 outtextxy(242-25,175,"WHAT?");
 outtextxy(338-50,250,"CONT...");
 outtextxy(363,325," QUIT..");
 setcolor(WHITE);
 }
hidemptr();
return;
}


about()
{
cleardevice();
welcome();
getch();
return(0);
}


contents()
{
int p[5][8],i,j,a=300,bn=462;
cleardevice();
setfillstyle(4,6);
settextstyle(0,0,1);
for(j=0;j<=1;j++)
for(i=0;i<=4;i++)
{
bar3d(50+70*j,50+80*i,80+70*j,80+80*i,0,0);
outtextxy(55+70*j,40+80*i,gh[2*i+j]);
}
setcolor(RED);
setfillstyle(10,BLUE);
sector(a-48,bn,89,271,10,10);
fillellipse(a+48,bn,10,10);
bar3d(a-50,bn-10,a+50,bn+10,0,0);
settextstyle(0,0,1);
outtextxy(a-50,bn,nm[20]);
setcolor(WHITE);
settextstyle(1,0,2);
pol(0);
color(0);
return(0);
}



 help()
 {
 int i,j;
 hidemptr();
 delay(200);
 cleardevice();
 hmenu();
 while(1)
 {
 int a,b,c;
 showmouseptr();
 getmousepos(&c,&a,&b);
 if(a>130&&a<295&&b>90&&b<155)
 {
 if(c==1)
 {
 delay(250);
 hidemptr();
 about();
 delay(250);
 cleardevice();
 hmenu();
 }
 }
 if(a>205&&a<370&&b>165&&b<230)
 {
 if(c==1)
 {
 delay(250);
 hidemptr();
 what();
 delay(250);
 cleardevice();
 hmenu();
 }
 }
 if(a>280&&a<445&&b>240&&b<305)
 {
 if(c==1)
 {
 delay(250);
 hidemptr();
 contentsmenu();
 delay(250);
 cleardevice();
 hmenu();
 }
 }
 if(a>355&&a<520&&b>315&&b<380)
 {
 if(c==1)
 {
 hidemptr();
 delay(500);
 return;
 }
 }
 }
 }

