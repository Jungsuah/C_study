#include<stdio.h>
#include<time.h>
#include<math.h>
int main(){
   
   const int BABY_PRICE = 0,
            ADULT_DAY_PRICE = 56000, ADULT_NIGHT_PRICE = 46000,
            TEEN_DAY_PRICE = 47000, TEEN_NIGHT_PRICE = 40000,
            CHILD_DAY_PRICE = 44000, CHILD_NIGHT_PRICE = 37000,
            OLD_DAY_PRICE = 44000, OLD_NIGHT_PRICE = 37000;
            
    int ticketList[10], ageList[10], countList[10], firstList[10], totalList[10], totalordercount =0;
    int sum=0;

   int ticket;
//   long long orderList[100][100]={0,};
while(true){

   while(true)
   {
   
   printf("������ �����ϼ���.\n");
   printf("1. �ְ���\n");
   printf("2. �߰���\n");  		

   while(true)
   {
	   scanf("%d", &ticket);
	   if(ticket == 1 || ticket == 2)
	   {
//	   	orderList[0] = ticket;
//	   	printf("list 0�� : %d\n",orderList[0]);
	   	break;
	   }
	   else{
	   		printf("�ٽ� �Է����ּ���.\n");
	   }
	   
   }
   
    ticketList[totalordercount] = ticket;


   long long  idNum;
   int num;
   long long birthYear, birthMonth, birthDay;
   long long todayYear, todayMonth, todayDay;
   int age;
   int flag;
   

  printf("�ֹι�ȣ�� �Է��ϼ���.(-���� �Է�)\n");
   while (true) {
      scanf("%lld", &idNum);
        

      // ���� ��¥ ���� ����
      time_t t = time(NULL);
      struct tm *now = localtime(&t);
      todayYear = now->tm_year + 1900;
      todayMonth = now->tm_mon + 1;
      todayDay = now->tm_mday;

      // ������� ����
      birthYear = idNum / 100000000000; // 11��������
      birthMonth = (idNum / 1000000000) % 100; // 9�� ������
      birthDay = (idNum / 10000000) % 100; //7
      flag = (idNum / 1000000) % 10;

      //���� ����ϱ�


      switch (flag) {
         case 1:
         case 2:
            birthYear += 1900;
            break;
         case 3:
         case 4:
            birthYear += 2000;
            break;
         default:
            printf("�ٽ� �Է��ϼ���.flag�� 1,2,3,4�� ����\n");
            continue;
      }
       age = todayYear - birthYear;
       if(birthMonth > todayMonth) 
   {
      // ������ ������ ����
      age--;
   } else if(birthMonth == todayMonth && birthDay > todayDay)
   {
      // ������ ������ ����
      age--;
   }
   

   



      if ((birthYear % 4 == 0 && birthYear % 100 != 0) || birthYear % 400 == 0) {
         // ������ ��� 2������ 29�� ����
         if (birthMonth == 2 && birthDay > 29) {
            printf("�ٽ� �Է��ϼ���. 29�ϱ����Դϴ�.\n");
            continue;
         }
      } else {
         // ����� ��� 2������ 28�� ����
         if (birthMonth == 2 && birthDay > 28) {
            printf("�ٽ� �Է��ϼ���. 28�ϱ����Դϴ�.\n");
            continue;
         }
      }
	if (birthMonth == 4 || birthMonth == 6 || birthMonth == 9 || birthMonth == 11) {
         if (birthDay > 30) {
            printf("�ٽ� �Է��ϼ���. 30�ϱ����Դϴ�.\n");
            continue;
         }
      }
      	if (birthMonth == 1 || birthMonth == 3 || birthMonth == 5 || birthMonth == 7 || birthMonth == 8 || birthMonth == 10 || birthMonth == 12) {
         if (birthDay > 31) {
            printf("�ٽ� �Է��ϼ���. 31�ϱ����Դϴ�.\n");
            continue;
         }
      }
     
      break;
   }
   
   int price;
   int tickettype;
   if(ticket ==1){
      if (age >= 19 && age <=64)
    {
    	tickettype=1;
       price =   ADULT_DAY_PRICE;
       //printf("%dƼ��:\n",price);
    }
    else if(age >=13 && age <=18)
    {
       price =   TEEN_DAY_PRICE;
       tickettype=2;
   //   printf("%dƼ��:\n",price);   
    }
    else if(age >=3 && age <=12)
    {
       price =   CHILD_DAY_PRICE;
       tickettype=3;
    //   printf("%dƼ��:\n",price);
    }
    else if( age >= 65)
    {
       price =   OLD_DAY_PRICE;
       tickettype=4;
    //   printf("%dƼ��:\n",price);
    }
    else
    {
       price = BABY_PRICE;
       tickettype=5;
    }
   }
    
    if(ticket == 2){
       if (age >= 19 && age <=64 )
    {
       price =   ADULT_NIGHT_PRICE;
       tickettype=1;
       
    }
    else if( age >=13 && age <=18)
    {
       price =   TEEN_NIGHT_PRICE;
       tickettype=2;
         
    }
    else if(age >=3 && age <=12)
    {
       price =   CHILD_NIGHT_PRICE;
       tickettype=3;
    }
    else if( age >= 65)
    {
       price =   OLD_NIGHT_PRICE;
       tickettype=4;
       
    }
    else 
    {
       price =   BABY_PRICE;
       tickettype=5;
       
    }
//    printf("%dƼ��:\n",price);
    }
      
//   orderList[1]= tickettype;
//   printf("list 1�� : %d\n",orderList[1]);
	ageList[totalordercount]= tickettype;
    
     
       
    
   int count;
   printf("��� �ֹ��Ͻðڽ��ϱ�? (�ִ� 10��)\n");
   
   while(true)
   {
	   scanf("%d", &count);
	   if(count >=1 && count<=10)
	   {
//	   	orderList[2]=count;
//	   	printf("list 2�� : %d\n",orderList[2]);
	   	
	   	break;
	   }
	   else{
	   		printf("�ٽ� �Է����ּ���.\n");
	   }
	   
   }
         countList[totalordercount]= count;
        
	  
   
   
   int first; 
   printf("�������� �����ϼ���.\n");
   printf("1. ���� (���� ���� �ڵ�ó��)\n");
   printf("2. �����\n");
   printf("3. ����������\n");
   printf("4. ���ڳ�\n");
   printf("5. �ӻ��\n");
      while(true)
   {
	   scanf("%d", &first);
	   if(first >=1 && first<=5)
	   {
//	   	orderList[4]= first;
//	   	printf("list 2�� : %d\n",orderList[4]);
	   	
	   	break;
	   }
	   else{
	   		printf("�ٽ� �Է����ּ���.\n");
	   }
	   
   }
   firstList[totalordercount]= first;

   
   float discount;
   float total;
   switch(first)
   {
      case 1:
      discount = 1;
      break;
      
      case 2:
      discount = 0.6;
      break;
      
      case 3:
      discount = 0.5;
      break;
            
      case 4:
      discount = 0.8;
      break;
      
      case 5:
      discount = 0.85;
      break;

   }
   total = ((float)price * (float)count * (float)discount);
   printf("������ %.0f �� �Դϴ�.\n", total);
//   orderList[3]= total;
//   printf("list 3�� : %d\n",orderList[3]);
   totalList[totalordercount]= total;
   
   printf("�����մϴ�.\n", total);

   int end;
  
   printf("��� �߱��Ͻðڽ��ϱ�?\n");
   printf("1. Ƽ�� �߱�\n");
   printf("2. ����\n"); 
   scanf("%d", &end);
   
		if(end == 2) {
			break;
		} 
		totalordercount++;
	}

//   printf("Ƽ�� �߱��� �����մϴ�. �����մϴ�.\n\n");
//   
//   printf("==================== �������� ====================\n");
   
	for(int index = 0; index <= totalordercount; index++){
		
			switch(ticketList[index]){
   			case 1 : printf("�ְ��� ");
   				break;
   			case 2: printf("�߰��� ");
   				break;
		   }
		switch(ageList[index]){
   			case 1 : printf("���� X ");
   				break;
   			case 2: printf("û�ҳ� X");
   				break;
   			case 3: printf("���� X");
   				break;
   			case 4: printf("��� X");
   				break;
   			case 5: printf("���� X");
   				break;
		   }
		if(countList[index] != 0){
			
			printf("%d", countList[index]);
		}
		
		if(totalList[index] >= 0){
			printf(" %d", totalList[index]);
		}
		switch(firstList[index]){
   			case 1 : printf(" *������� ����\n");
   				break;
   			case 2: printf(" *����� �������\n");
   				break;
   			case 3: printf(" *���������� �������\n");
   				break;
            case 4 :  printf(" *���ڳ� �������\n");
                break;
            case 5 :  printf(" *�ӻ�� �������\n");
                break;
}
		sum += totalList[index];
		
		
		}
		printf("������� �Ѿ��� %d�Դϴ�.\n",sum);
		int ing; 
		printf("��� ����(1: ���ο� �ֹ�, 2: ���α׷� ����):");
		scanf("%d",&ing);
		if(ing == 2){

	break;
	}
	ticketList[10]=0, ageList[10]=0, countList[10]=0, firstList[10]=0, totalList[10]=0, totalordercount =0 ;
}

}


   





    

