// Hacettepe University Department of Electrical and Electronics Engineering
// ELE 120 Project -- LOCAL SUPERMARKET-- Instructor : Dr. Ismail Uyanýk
// Group members : Nurettin Emre Ceylan-21828293, Eyüp Enes Aytaç-21828197, Mehmet Nurettin Gündüz-21990887

#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
#define max 20
#define name 9

void AlpList(char products[name][max],char temp[max]); //Function protoype for calling sorting algorithm
int netprofit (int total, int Qorange, int Qchocolate, int Qapple, int Qtomato, int Qcoffee, int Qredmeat, int masraf);//Function prototype for calculating profit
void FeedBack(char fback[20] );//Function protoype for evaluating users' comments
void AskWho ( char *p);	//Function protoype for initializing the operation time

//This programme runs with integer values ! Pay attention for this point !
int main () {
              
	
    int numofProd;//Code of the product entered to system
    int quantity;
    int total=0,Qchocolate=0,Qbread=0,Qorange=0,Qapple=0,Qtomato=0,Qredmeat=0,Qwater=0,Qcoffee=0;//amount of the products 
    int QQchocolate=0,QQbread=0,QQorange=0,QQapple=0,QQtomato=0,QQredmeat=0,QQwater=0,QQcoffee=0;//Earned cost from each sale
    
	char string[20];
    printf("Welcome to Sunshine Market!!!\nAre you 'customer' or 'staff'?\n");//Please enter 'customer' or 'staff' to start the operation
    scanf("%s",&string);
   
    AskWho(string);//calling the time function
	
	printf ("NOTE: Since this programme is written with int values, please pay attention for entering integer values!!! \n");
	char products[name][max]={"Apple","Orange","Chocolate","Bread","Red Meat","Water","Coffee","Tomato"};//Products(items) in the inventory
	char temp[max];

	int discount ; //Initialize the discount amount
	int rorange, rbread, rchocolate, rapple, rwater, rredmeat, rcoffee, rtomato; //remaining amounts in the inventory
	int masraf;//Total expenses of the products
	int net;//Net Profit
	int orange=15 , bread=20, chocolate=30, apple=20 , tomato=30, coffee=40 , redmeat=5 , water=50 ;//Amounts of the products in related unit
	int operation,p ;
	begin :
	printf("\n1.Market\n2.Inventory(Overview)\n3.Profit\n") ;//Enter the number to switch the operation
	scanf("%d",&operation) ;
	switch(operation) {
		
	case 1://Market (Main Part)
	    printf(" Welcome again. You can see the list of the products currently in the market. All of the products are fresh and are being renewed every weekend.\n\n");
        printf("1.Chocolate(30 packs)\n2.Bread(20 pieces)\n3.Orange(15 kg)\n4.Apple(20 kg)\n5.Tomato(30 kg)\n6.Red meat(5 kg)\n7.Water(50 L)\n8.Coffee(40 packs)\n9.Cash\n\n");
        printf("The codes are given near the product names.In paranthesis, the amount of the product in the stock is stated in related unit.\n\n");//Number near the product is its operation code
		beginmain:
        printf(" Please enter the code of the product and do not exceed the limit : \n");//code of the product should be entered to purchase the product
        scanf("%d",&numofProd);

    switch(numofProd) {//switching the product

     case 1:
         begin1 :
         printf(" Chocolate is 2 TL/packet, how many packs of chocolate do you want?\n");//Asking the amount of the product, the limits should't be exceeded.
         scanf("%d",&quantity);
         Qchocolate=quantity;//Entered amount is stored in the quantity of product

         if(Qchocolate<31) {
         printf(" Chocolate is added to your basket.\n\n");
		 }
         else {
         printf(" We don't have that many chocolate, please enter a number considering the stock. (max 30 packet)\n\n");
         goto begin1;//If the limit is exceeded, the user will be directed to the beginnig of the purchase of the product
         }
       goto beginmain;//Directing the user to the 'Market' section.

     case 2:
         begin2 :
         printf(" Bread is 1 TL/piece, how many piece of breads do you want?\n");//Asking the amount of the product, the limits should't be exceeded.
         scanf("%d",&quantity);
         Qbread=quantity;//Entered amount is stored in the quantity of product

         if(Qbread<31) {
         printf(" Bread is added to your basket.\n\n");
         }  
		 else {
         printf(" We don't have that many bread, please enter a number considering the stock. (max 30)\n\n");
         goto begin2;//If the limit is exceeded, the user will be directed to the beginnig of the purchase of the product
         } 
        goto beginmain;//Directing the user to the 'Market' section.
     
	 case 3:
         begin3 :
         printf(" Orange is 3 TL/kg, how many kg of orange do you want?\n");//Asking the amount of the product, the limits should't be exceeded.
         scanf("%d",&quantity);
         Qorange=quantity;//Entered amount is stored in the quantity of product

         if(Qorange<16) {
         printf(" Orange is added to your basket.\n\n");
         } 
		 else {
         printf(" We don't have that much orange, please enter a number considering the stock. (max 15 kg)\n\n");
         goto begin3;//If the limit is exceeded, the user will be directed to the beginnig of the purchase of the product
         } 
        goto beginmain;//Directing the user to the 'Market' section.
     
	 case 4:
         begin4 :
         printf(" Apple is 2 TL/kg, how many kg of apple do you want?\n");//Asking the amount of the product, the limits should't be exceeded.
         scanf("%d",&quantity);
         Qapple=quantity;//Entered amount is stored in the quantity of product

         if(Qapple<21) {
            printf(" Apple is added to your basket.\n\n");
         }  
		 else {
         printf(" We don't have that much apple, please enter a number with considering our stock. (max 20 kg)\n\n");
         goto begin4;//If the limit is exceeded, the user will be directed to the beginning of the purchase of the product
         } 
        goto beginmain;//Directing the user to the 'Market' section.
     
	 case 5:
         begin5 :
         printf(" Tomato is 4 TL/kg, how many kg of tomatoes do you want?\n");//Asking the amount of the product, the limits should't be exceeded.
         scanf("%d",&quantity);
         Qtomato=quantity;//Entered amount is stored in the quantity of product

         if(Qtomato<31) {
         printf(" Tomato is added to your basket.\n\n");
         }  
		 else {
         printf(" We don't have that much tomato, please enter a number considering the stock. (max 30 kg)\n\n");
         goto begin5;//If the limit is exceeded, the user will be directed to the beginnig of the purchase of the product
         } 
        goto beginmain;//Directing the user to the 'Market' section.
     
	 case 6:
         begin6 :
         printf(" Red meat is 60 TL/kg, how many kg of red meat do you want?\n");//Asking the amount of the product, the limits should't be exceeded.
         scanf("%d",&quantity);
         Qredmeat=quantity;//Entered amount is stored in the quantity of product

         if(Qredmeat<6) {
         printf(" Red meat is added to your basket.\n\n");
         }  
		 else {
         printf(" We don't have that much red meat, please enter a number considering the stock. (max 5 kg)\n\n");
         goto begin6;//If the limit is exceeded, the user will be directed to the beginnig of the purchase of the product
         } 
        goto beginmain;//Directing the user to the 'Market' section.
     
	 case 7:
         begin7 :
         printf(" Water is 1 TL/L, how many L of water do you want?\n");//Asking the amount of the product, the limits should't be exceeded.
         scanf("%d",&quantity);
         Qwater=quantity;//Entered amount is stored in the quantity of product

         if(Qwater<51) {
         printf(" Water is added to your basket.\n\n");
         }  
		 else {
         printf(" We don't have that much water, please enter a number considering the stock (max 50 L)\n\n");
         goto begin7;//If the limit is exceeded, the user will be directed to the beginnig of the purchase of the product
         } 
        goto beginmain;//Directing the user to the 'Market' section.
     
	 case 8:
         begin8 :
         printf(" Coffee is 3 TL/packet, how many packs of coffee do you want?\n");//Asking the amount of the product, the limits should't be exceeded.
         scanf("%d",&quantity);
         Qcoffee=quantity;//Entered amount is stored in the quantity of product

         if(Qcoffee<41) {
         printf(" Coffee is added to your basket.\n\n");
         }  
		 else {
         printf(" We don't have that much coffee, please enter a number considering the stock. (max 40 packet)\n\n");
         goto begin8;//If the limit is exceeded, the user will be directed to the beginnig of the purchase of the product
         } 
        goto beginmain;
        
     case 9:
          printf(" Your shopping has finished.\n"); // Stating that shopping is over.
    
          printf(" Here is the list of the products in your basket:\n\n");//Showing clearly  what the user has purchased
    
          printf(" %d Packs of Chocolate = %d TL\n",Qchocolate,QQchocolate =Qchocolate*2);//Multiplying the purchased amount of the item with cost per unit
      
          printf(" %d Pieces of Bread = %d TL\n",Qbread,QQbread =Qbread*1);//Multiplying the purchased amount of the item with cost per unit
    
          printf(" %d kg Orange = %d TL\n",Qorange,QQorange =Qorange*3);//Multiplying the purchased amount of the item with cost per unit
    
          printf(" %d kg Apple = %d TL\n",Qapple,QQapple =Qapple*2);//Multiplying the purchased amount of the item with cost per unit
    
          printf(" %d kg Tomato = %d TL\n",Qtomato,QQtomato =Qtomato*4);//Multiplying the purchased amount of the item with cost per unit
    
          printf(" %d kg Red meat = %d TL\n",Qredmeat,QQredmeat =Qredmeat*60);//Multiplying the purchased amount of the item with cost per unit
    
          printf(" %d L Water = %d TL\n",Qwater,QQwater =Qwater*1);//Multiplying the purchased amount of the item with cost per unit
    
          printf(" %d Packet Coffee = %d TL\n\n",Qcoffee,QQcoffee = Qcoffee*3);//Multiplying the purchased amount of the item with cost per unit

          total = QQchocolate+QQbread+QQorange+QQapple+QQtomato+QQredmeat+QQwater+QQcoffee; //Calculating the total cost
    
          printf(" Total cost = %d TL\n\n",total);//Total cost without discount
    
          srand(time(NULL));//Random number generator to determine the discount
          if (total<=5){
	             total=total+0;//No discount
	             printf("We have no discount under the 5 TL sales.Net cost is %d TL\n\n",total);//Showing the net cost to user   
         }  
          else if (5<total<25){
		         discount=1+rand()%5;//Discount amount is between 1-5 TL
                 total=total-discount;//Total cost with discount
                 printf("Since we have discount in our market, net cost is %d TL\n\n",total);//Showing the net cost to user
	     }
	      else if (total>=25) {
    	         discount=1+rand()%15;//Discount amount is between 1-15 TL
                 total=total-discount;//Total cost with discount
                 printf("Since we have discount in our market, net cost is %d TL\n\n",total);//Showing the net cost to user
	     }
	     
		 char fback[20];
	     printf ("Are you satisfied with our service?\n 'yes','indecisive' or 'no' \n\n ");//Give an answer in the provided words to see the comment :D
	     scanf ("%s",&fback);
	
	     FeedBack(fback);//Calling the feedback function to receive comment
    
         break;
    
	   default:
	   break;
     } 
       
	 printf(" We hope you enjoyed the shopping, have a nice day. :D\n");
     goto begin ;
 	
	case 2://Inventory, to browse what the local supermarket contains (Overview)
	
      for(int i=0; i<name ; i++){
		printf("%s\n",products[i]); 
     }
	  int sort;
	  printf("For alphabetical list, please press 1\n");//For alphabetical order, please press '1' (optionally)
	  scanf("%d",&sort);
	  if (sort==1){
		     AlpList(products,temp);//calling the sorting function
	 }
	
	 goto begin;
		 
   
    case 3 ://Profit (Only Staff)
    	
		 printf("Sunshine Market\n Please enter a password:\n") ;//Only the authorized users can access to this section(Password:120)
         scanf("%d",&p) ;
         if (p==120) {
	
    	        net=netprofit(total,Qorange,Qchocolate,Qapple,Qtomato,Qcoffee,Qredmeat,masraf) ;//Calling the netprofit function to substract the expenses
		
    	     printf("Net profit in SunShine Market is %d TL\n\n",net) ; //Printing the profit for the SunShine Market
		     rorange=orange-Qorange;//Remaining amount of the products
		     rbread=bread-Qbread;
		     rchocolate=chocolate-Qchocolate;
		     rapple=apple-Qapple;
		     rtomato=tomato-Qtomato;
		     rwater=water-Qwater;
		     rredmeat=redmeat-Qredmeat;
		     rcoffee=coffee-Qcoffee;
	 	     printf ("In stock, now we have\n%d kg Orange\n%d piece of Bread\n%d Packs of Chocolate\n%d kg Apple\n%d kg Tomato\n%d L Water\n%d Packs of Coffee\n%d kg red meat\n",rorange, rbread, rchocolate, rapple, rtomato, rwater, rcoffee, rredmeat);
		      // printing the remaining amounts of the products after the shopping
             break;
             }
         else {
	         printf("Wrong password !!!\n") ;//Warning if the wrong code is entered
	         goto begin ;
	         }
	
   }
}
	
int netprofit (int total, int Qorange, int Qchocolate, int Qapple, int Qtomato, int Qcoffee, int Qredmeat, int masraf)
	{
	printf ("Average selling expenses:\n1 TL/kg Orange\n1 TL/packet Chocolate\n1 TL/kg Apple\n "); // Determining the expenses of each product
	printf ("2 TL/kg Tomato\n1 TL/packet Coffee\n35 TL/kg Red Meat\n\n ");
	masraf = Qorange*1 + Qchocolate*1 + Qapple*1 + Qtomato*2 + Qcoffee*1 + Qredmeat*35 ;//Total expense
	
	if (total>20){
		masraf=masraf+5;//Substracting the additional selling expense
		printf("If the total cost is greater than 20 TL, there is an 5 TL additional selling expense.\n");
	 }
	return total-masraf; //Substracting the expenses
}  

void AlpList(char products[name][max],char temp[max]){
	
	for (int j=0; j<name; j++){
		for(int i=0; i<name; i++){
			if (strcmp(products[i-1],products[i])>0){//String comparism to sort the products in alphabetical order
				strcpy(temp,products[i-1]);
				strcpy(products[i-1],products[i]);
				strcpy(products[i],temp);
			}
		}
}     
	 	
		for(int i=0; i<name-1 ; i++){
		printf("%s\n",products[i]); //Printing the alphabetical order
}
}

void FeedBack(char fback[20]){
	
	if (strcmp(fback,"yes")==0){//Again string comparism to give the relevant answer
		printf(" Thanks for your support! :D \n\n ");//Appreciating answer for the user
	 }
	else if (strcmp(fback,"indecisive")==0){
		printf( " Nevermind :d \n\n"); //Paying no attention for the user's comment
	 }
	else if (strcmp(fback,"no")==0){
		printf(" Please do not come again ! :/ \n\n ");//Hoping not to see the user again
     }
}

void AskWho(char *p){
   time_t Current;
   time (&Current);//calling the time function to get computer time
   
   if(strcmp(p,"customer")==0) {
	      printf("Your shopping has started at %s\n",ctime(&Current));
    }
    else if(strcmp(p,"staff")==0) {
          printf("Your process has started at %s\n",ctime(&Current));//representing the operation time with respect to computer time
    }
}
	
	
	
	
	
	
	

