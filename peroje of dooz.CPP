#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>


   class bord/*klase safhe*/
 {
	public:
		int x1;
		int x2;
		int y1;
		int y2;
		int mB;
		int lx1;/*motaqayerha khat*/
		int lx2;
		int ly1;
		int ly2;
		int Cx;/*motaqayerha dayereh*/
		int Cy;
		int r;

		void minit(int lx1,int ly1,int lx2,int ly2,int lmB);/*tabe mostatel*/
		void linit(int llx1,int lly1,int llx2,int lly2);/*tabe khat*/
		void cinit(int lCx,int lCy,int lr);//tabe dayerh
		void mDriw();
		void lDriw();
		void cDriw();

 };

     void bord:: minit(int lx1,int ly1,int lx2,int ly2,int lmB)
 {
       x1=lx1;x2=lx2;y1=ly1;y2=ly2;mB=lmB;
 }

     void bord:: linit(int llx1,int lly1,int llx2,int lly2)
 {
	lx1=llx1;lx2=llx2;ly1=lly1;ly2=lly2;
 }

     void bord:: cinit(int lCx,int lCy,int lr)
 {
       Cx=lCx;Cy=lCy;r=lr;
 }

    void bord::mDriw()/*keshidan mostatelha safhe*/
 {
	setcolor(mB);
	rectangle(x1,y1,x2,y2);
	rectangle(x1+80,y1+66,x2-80,y2-60);
	rectangle(x1+170,y1+140,x2-170,y2-130);
	rectangle(x1+5,y1+5,x2+5,y2+5);
	rectangle(x1+85,y1+71,x2-85,y2-65);
	rectangle(x1+175,y1+145,x2-175,y2-135);
 }

    void bord::lDriw()/*keshidan khathaye safhe*/
 {

	line(lx1,ly1,lx2,ly2);
	line(lx1,ly1+173,lx2,ly2+31);
	line(lx1,ly1+331,lx2,ly2+59);
	line(lx1+250,ly1,lx2+81,ly2);
	line(lx1+490,ly1,lx2+151,ly2);
	line(lx1+250,ly1+330,lx2+81,ly2+60);
	line(lx1+320,ly1+200,lx2+321,ly2+189);
	line(lx1+490,ly1+170,lx2+150,ly2+29);

  }

    void bord::cDriw()/*keshidan dayereha*/
 {
	setcolor(6);
	circle(Cx,Cy,r);
	floodfill(Cx,Cy,6);
 }



   class moh/*kelase mohreh*/
 {
	public:
		int x;
		int y;
		int r;
		int cB;
		void mohinit(int lx,int ly,int lr,int lcB);//tabe keshidan mohreh
		void mohdriw();
		void hide(int hx,int hy,int hr,int hcB);//tabe makhfi kardan mohreh

 };

   void moh::mohinit(int lx,int ly,int lr,int lcB)
 {
	x=lx;y=ly;r=lr;cB=lcB;

 }

  void moh::mohdriw()
 {
	setcolor(cB);
	circle(x,y,r);
	rectangle(x+5,y-5,x-5,y+5);
	setfillstyle(5,cB);
	floodfill(x,y,cB);
 }

 void moh::hide(int hx,int hy,int hr,int hcB)
 {
  x=hx;
  y=hy;
  r=hr;
  cB=hcB;


	setcolor(cB);
	circle(x,y,r);
	rectangle(x+5,y-5,x-5,y+5);
	setfillstyle(1,cB);
	floodfill(x,y,cB);

  }


int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
 }

 outtextxy(4,470,"Drawer:Shadman Adman");/*inro bayad pak kony*/




/*rasme dayerhaye tasadofy bar roye safhe*/

 setcolor(15);
	for(int j=1;j<=300;j++)
    circle(random(700),random(700),random(2));




  /*kshidan mostatilhaye bord*/

 bord m;
   m.minit(70,70,560,400,8);
   m.mDriw();


  /*kshidan khathaye bord*/

 bord l1;

   l1.linit(70,70,239,211);
   l1.lDriw();



/*kshidan dayerha roye niqte barkhorde mostatilha va khatha*/

 bord p;

    p.cinit(70,70,13); p.cDriw();p.cinit(239,211,13); p.cDriw();p.cinit(70,243,13);p.cDriw();
    p.cinit(70,401,13);p.cDriw();p.cinit(239,270,13);p.cDriw();p.cinit(320,70,13);  p.cDriw();
    p.cinit(320,211,13);p.cDriw();p.cinit(560,70,13);p.cDriw(); p.cinit(390,211,13); p.cDriw();
    p.cinit(320,400,13);p.cDriw();p.cinit(320,271,13);p.cDriw();p.cinit(390,270,13);p.cDriw();
    p.cinit(560,400,13);p.cDriw();p.cinit(560,240,13);p.cDriw();  p.cinit(389,240,13);p.cDriw();
    p.cinit(150,136,13);p.cDriw();p.cinit(480,340,13);p.cDriw();p.cinit(320,136,13);p.cDriw();
    p.cinit(480,136,13);p.cDriw();p.cinit(480,240,13);p.cDriw();p.cinit(150,240,13);p.cDriw();
    p.cinit(150,340,13);p.cDriw();p.cinit(240,240,13);p.cDriw();p.cinit(320,340,13);p.cDriw();

 /*nveshtan hrof roye dayereh maqsad */

 setcolor(3);
 outtextxy(60,45,"A"); outtextxy(324,45,"B");outtextxy(560,45,"C");outtextxy(140,111,"D");outtextxy(325,111,"E");outtextxy(490,115,"F");
 outtextxy(60,218,"J");outtextxy(325,186,"H");outtextxy(400,186,"I");outtextxy(250,190,"G");outtextxy(140,215,"K");outtextxy(255,225,"L");
 outtextxy(405,225,"M");outtextxy(490,220,"N");outtextxy(570,220,"O");outtextxy(254,250,"P");outtextxy(325,246,"Q");outtextxy(405,260,"R");
 outtextxy(140,315,"S");outtextxy(325,315,"T");outtextxy(485,315,"U");outtextxy(60,376,"V");outtextxy(325,375,"W");outtextxy(569,375,"X");


  /* namayeshe noee mohrehaye pleyer1 va pleyere2 */

 setcolor(3);
     outtextxy(200,450,"Pleyer1:");
 moh f;
     f.mohinit(275,452,10,4);
     f.mohdriw();

 setcolor(3);
     outtextxy(350,450,"Pleyer2:");
     f.mohinit(426,452,10,9);
     f.mohdriw();

 rectangle(189,435,453,470);
 rectangle(184,430,458,475);


/*rayat kardan nobat*/

    int IB1[24],ib1[24],ib2[24];

   for(int b=1;b<=24;b++)
   {
      IB1[b]=0;
      ib1[b]=0;
      ib2[b]=0;
   }



 moh p1,p2;
 int t=2;
 char ch;



/*gozashtan mohreha ba feshar dadane horof*/

   do
 {
     if(t%2==0)
   {
	 ch=getch();


	  switch(ch)
	 {
		case 65:if(IB1[1]==0){p1.mohinit(70,70,10,4);p1.mohdriw();IB1[1]=1;ib1[1]=1;t=3;};break;//A
		case 66:if(IB1[2]==0){p1.mohinit(320,70,10,4);p1.mohdriw();IB1[2]=1;ib1[2]=1;t=3;};break;//B
		case 67:if(IB1[3]==0){p1.mohinit(560,70,10,4);p1.mohdriw();IB1[3]=1;ib1[3]=1;t=3;};break;//C
		case 68:if(IB1[4]==0){p1.mohinit(150,136,10,4);p1.mohdriw();IB1[4]=1;ib1[4]=1;t=3;};break;//D
		case 69:if(IB1[5]==0){p1.mohinit(320,136,10,4);p1.mohdriw();IB1[5]=1;ib1[5]=1;t=3;};break;//E
		case 70:if(IB1[6]==0){p1.mohinit(480,136,10,4);p1.mohdriw();IB1[6]=1;ib1[6]=1;t=3;};break;//F
		case 71:if(IB1[7]==0){p1.mohinit(239,211,10,4);p1.mohdriw();IB1[7]=1;ib1[7]=1;t=3;};break;//G
		case 72:if(IB1[8]==0){p1.mohinit(320,211,10,4);p1.mohdriw();IB1[8]=1;ib1[8]=1;t=3;};break;//H
		case 73:if(IB1[9]==0){p1.mohinit(390,211,10,4);p1.mohdriw();IB1[9]=1;ib1[9]=1;t=3;};break;//I
		case 74:if(IB1[10]==0){p1.mohinit(70,243,10,4);p1.mohdriw();IB1[10]=1;ib1[10]=1;t=3;};break;//J
		case 75:if(IB1[11]==0){p1.mohinit(150,240,10,4);p1.mohdriw();IB1[11]=1;ib1[11]=1;t=3;};break;//K
		case 76:if(IB1[12]==0){p1.mohinit(240,240,10,4);p1.mohdriw();IB1[12]=1;ib1[12]=1;t=3;};break;//L
		case 77:if(IB1[13]==0){p1.mohinit(389,240,10,4);p1.mohdriw();IB1[13]=1;ib1[13];t=3;};break;//M
		case 78:if(IB1[14]==0){p1.mohinit(480,240,10,4);p1.mohdriw();IB1[14]=1;ib1[14]=1;t=3;};break;//N
		case 79:if(IB1[15]==0){p1.mohinit(560,240,10,4);p1.mohdriw();IB1[15]=1;ib1[15]=1;t=3;};break;//O
		case 80:if(IB1[16]==0){p1.mohinit(239,270,10,4);p1.mohdriw();IB1[16]=1;ib1[16]=1;t=3;};break;//P
		case 81:if(IB1[17]==0){p1.mohinit(320,271,10,4);p1.mohdriw();IB1[17]=1;ib1[17]=1;t=3;};break;//Q
		case 82:if(IB1[18]==0){p1.mohinit(390,270,10,4);p1.mohdriw();IB1[18]=1;ib1[18]=1;t=3;};break;//R
		case 83:if(IB1[19]==0){p1.mohinit(150,340,10,4);p1.mohdriw();IB1[19]=1;ib1[19]=1;t=3;};break;//S
		case 84:if(IB1[20]==0){p1.mohinit(320,340,10,4);p1.mohdriw();IB1[20]=1;ib1[20]=1;t=3;};break;//T
		case 85:if(IB1[21]==0){p1.mohinit(480,340,10,4);p1.mohdriw();IB1[21]=1;ib1[21]=1;t=3;};break;//U
		case 86:if(IB1[22]==0){p1.mohinit(70,401,10,4);p1.mohdriw();IB1[22]=1;ib1[22]=1;t=3;};break;//V
		case 87:if(IB1[23]==0){p1.mohinit(320,400,10,4);p1.mohdriw();IB1[23]=1;ib1[23]=1;t=3;};break;//W
		case 88:if(IB1[24]==0){p1.mohinit(560,400,10,4);p1.mohdriw();IB1[24]=1;ib1[24]=1;t=3;};break;//X

	}

/*taene dooz baraye peleyer1*/

       char D;
       moh d;

     if((ib1[1]==1 &&  ib1[2]==1  &&  ib1[3]==1  )||(ib1[4]==1 &&  ib1[5]==1  &&  ib1[6]==1  )||(ib1[7]==1 &&  ib1[8]==1  &&  ib1[9]==1 )||(ib1[10]==1 &&  ib1[11]==1  &&  ib1[12]==1  )||(ib1[13]==1 &&  ib1[14]==1  &&  ib1[15]==1  )||(ib1[16]==1 &&  ib1[17]==1  &&  ib1[18]==1  )
    || (ib1[19]==1 &&  ib1[20]==1  &&  ib1[21]==1  )||(ib1[22]==1 &&  ib1[23]==1  &&  ib1[24]==1  )||(ib1[1]==1 &&  ib1[4]==1  &&  ib1[7]==1  )
    ||(ib1[2]==1 &&  ib1[5]==1  &&  ib1[8]==1  )||(ib1[3]==1 &&  ib1[6]==1  &&  ib1[9]==1  )||(ib1[1]==1 &&  ib1[10]==1  &&  ib1[22]==1  )
    ||(ib1[4]==1 &&  ib1[11]==1  &&  ib1[19]==1  )||(ib1[7]==1 &&  ib1[12]==1  &&  ib1[16]==1  )||(ib1[9]==1 &&  ib1[13]==1  &&  ib1[18]==1  )
    ||(ib1[6]==1 &&  ib1[14]==1  &&  ib1[21]==1  )||(ib1[3]==1 &&  ib1[15]==1  &&  ib1[24]==1  )||(ib1[16]==1 &&  ib1[19]==1  &&  ib1[22]==1  )
    ||(ib1[17]==1 &&  ib1[20]==1  &&  ib1[23]==1  )||(ib1[18]==1 &&  ib1[21]==1  &&  ib1[24]==1  )
     )
     {

   setcolor(15);
    outtextxy(10,10,"Pleyer1 Do Dooz");

    outtextxy(200,10,"select the character to delete!");

/*hazfe yeky az mohreha tavasote peleyer1 dar sorate barande shodan*/

    D=getch();
    switch(D)
    {
    case 65:if(ib2[1]==1){d.hide(70,70,10,15);IB1[1]=0;t=3;};break;
     case 66:if(ib2[2]==1){d.hide(320,70,10,15);IB1[2]=0;t=3;};break;
     case 67:if(ib2[3]==1){d.hide(560,70,10,15);IB1[3]=0;t=3;};break;
     case 68:if(ib2[4]==1){d.hide(150,136,10,15);IB1[4]=0;t=3;};break;
     case 69:if(ib2[5]==1){d.hide(320,136,10,15);IB1[5]=0;t=3;};break;
    }

    }

    }



     if(t%2!=0)
    {
	 ch=getch();

	 switch(ch)
	{

		case 65:if(IB1[1]==0){p2.mohinit(70,70,10,9);p2.mohdriw();IB1[1]=1;ib2[1]=1;t=2;};break;
		case 66:if(IB1[2]==0){p2.mohinit(320,70,10,9);p2.mohdriw();IB1[2]=1;ib2[2]=1;t=2;};break;
		case 67:if(IB1[3]==0){p2.mohinit(560,70,10,9);p2.mohdriw();IB1[3]=1;ib2[3]=1;t=2;};break;
		case 68:if(IB1[4]==0){p2.mohinit(150,136,10,9);p2.mohdriw();IB1[4]=1;ib2[4]=1;t=2;};break;
		case 69:if(IB1[5]==0){p2.mohinit(320,136,10,9);p2.mohdriw();IB1[5]=1;ib2[5]=1;t=2;};break;
		case 70:if(IB1[6]==0){p2.mohinit(480,136,10,9);p2.mohdriw();IB1[6]=1;ib2[6]=1;t=2;};break;
		case 71:if(IB1[7]==0){p2.mohinit(239,211,10,9);p2.mohdriw();IB1[7]=1;ib2[7]=1;t=2;};break;
		case 72:if(IB1[8]==0){p2.mohinit(320,211,10,9);p2.mohdriw();IB1[8]=1;ib2[8]=1;t=2;};break;
		case 73:if(IB1[9]==0){p2.mohinit(390,211,10,9);p2.mohdriw();IB1[9]=1;ib2[9]=1;t=2;};break;
		case 74:if(IB1[10]==0){p2.mohinit(70,243,10,9);p2.mohdriw();IB1[10]=1;ib2[10]=1;t=2;};break;
		case 75:if(IB1[11]==0){p2.mohinit(150,240,10,9);p2.mohdriw();IB1[11]=1;ib2[11]=1;t=2;};break;
		case 76:if(IB1[12]==0){p2.mohinit(240,240,10,9);p2.mohdriw();IB1[12]=1;ib2[12]=1;t=2;};break;
		case 77:if(IB1[13]==0){p2.mohinit(389,240,10,9);p2.mohdriw();IB1[13]=1;ib2[13]=1;t=2;};break;
		case 78:if(IB1[14]==0){p2.mohinit(480,240,10,9);p2.mohdriw();IB1[14]=1;ib2[14]=1;t=2;};break;
		case 79:if(IB1[15]==0){p2.mohinit(560,240,10,9);p2.mohdriw();IB1[15]=1;ib2[15]=1;t=2;};break;
		case 80:if(IB1[16]==0){p2.mohinit(239,270,10,9);p2.mohdriw();IB1[16]=1;ib2[16]=1;t=2;};break;
		case 81:if(IB1[17]==0){p2.mohinit(320,271,10,9);p2.mohdriw();IB1[17]=1;ib2[17]=1;t=2;};break;
		case 82:if(IB1[18]==0){p2.mohinit(390,270,10,9);p2.mohdriw();IB1[18]=1;ib2[18]=1;t=2;};break;
		case 83:if(IB1[19]==0){p2.mohinit(150,340,10,9);p2.mohdriw();IB1[19]=1;ib2[19]=1;t=2;};break;
		case 84:if(IB1[20]==0){p2.mohinit(320,340,10,9);p2.mohdriw();IB1[20]=1;ib2[20]=1;t=2;};break;
		case 85:if(IB1[21]==0){p2.mohinit(480,340,10,9);p2.mohdriw();IB1[21]=1;ib2[21]=1;t=2;};break;
		case 86:if(IB1[22]==0){p2.mohinit(70,401,10,9);p2.mohdriw();IB1[22]=1;ib2[22]=1;t=2;};break;
		case 87:if(IB1[23]==0){p2.mohinit(320,400,10,9);p2.mohdriw();IB1[23]=1;ib2[23]=1;t=2;};break;
		case 88:if(IB1[24]==0){p2.mohinit(560,400,10,9);p2.mohdriw();IB1[24]=1;ib2[24]=1;t=2;};break;

	}

/*taen dooz baraye peleyer2*/
      moh d1;
      char D1;

     if((ib2[1]==1 &&  ib2[2]==1  &&  ib2[3]==1  )||(ib2[4]==1 &&  ib2[5]==1  &&  ib2[6]==1  )||(ib2[7]==1 &&  ib2[8]==1  &&  ib2[9]==1 )
     ||(ib2[10]==1 &&  ib2[11]==1  &&  ib2[12]==1  )||(ib2[13]==1 &&  ib2[14]==1  &&  ib2[15]==1  )||(ib2[16]==1 &&  ib2[17]==1  &&  ib2[18]==1  )
    || (ib2[19]==1 &&  ib2[20]==1  &&  ib2[21]==1  )||(ib2[22]==1 &&  ib2[23]==1  &&  ib2[24]==1  )||(ib2[1]==1 &&  ib2[4]==1  &&  ib2[7]==1  )
    ||(ib2[2]==1 &&  ib2[5]==1  &&  ib2[8]==1  )||(ib2[3]==1 &&  ib2[6]==1  &&  ib2[9]==1  )||(ib2[1]==1 &&  ib2[10]==1  &&  ib2[22]==1  )
    ||(ib2[4]==1 &&  ib2[11]==1  &&  ib2[19]==1  )||(ib2[7]==1 &&  ib2[12]==1  &&  ib2[16]==1  )||(ib2[9]==1 &&  ib2[13]==1  &&  ib2[18]==1  )
    ||(ib2[6]==1 &&  ib2[14]==1  &&  ib2[21]==1  )||(ib2[3]==1 &&  ib2[15]==1  &&  ib2[24]==1  )||(ib2[16]==1 &&  ib2[19]==1  &&  ib2[22]==1  )
    ||(ib2[17]==1 &&  ib2[20]==1  &&  ib2[23]==1  )||(ib2[18]==1 &&  ib2[21]==1  &&  ib2[24]==1  )
     )
     {
   setcolor(0);
   setcolor(15);
    outtextxy(10,20,"Pleyer2 Do Dooz");

    outtextxy(200,20,"select the character to delete!");


/*hazfe yeky az mohreha tvasote peleyer2 dar sorate barande shodan*/

    D1=getch();
    switch(D1)
    {
    case 65:if(ib1[1]==1){d1.hide(70,70,10,15);IB1[1]=0;t=2;};break;
     case 66:if(ib1[2]==1){d1.hide(320,70,10,15);IB1[2]=0;t=2;};break;
     case 67:if(ib1[3]==1){d1.hide(560,70,10,15);IB1[3]=0;t=2;};break;
     case 68:if(ib1[4]==1){d1.hide(150,136,10,15);IB1[4]=0;t=2;};break;
     case 69:if(ib1[5]==1){d1.hide(320,136,10,15);IB1[5]=0;t=2;};break;
    }

    }



   }

 }while(ch!=13);




   /* clean up */
   getch();
   closegraph();
   return 0;
}

