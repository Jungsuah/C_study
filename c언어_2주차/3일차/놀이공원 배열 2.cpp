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
   
   printf("권종을 선택하세요.\n");
   printf("1. 주간권\n");
   printf("2. 야간권\n");  		

   while(true)
   {
	   scanf("%d", &ticket);
	   if(ticket == 1 || ticket == 2)
	   {
//	   	orderList[0] = ticket;
//	   	printf("list 0번 : %d\n",orderList[0]);
	   	break;
	   }
	   else{
	   		printf("다시 입력해주세요.\n");
	   }
	   
   }
   
    ticketList[totalordercount] = ticket;


   long long  idNum;
   int num;
   long long birthYear, birthMonth, birthDay;
   long long todayYear, todayMonth, todayDay;
   int age;
   int flag;
   

  printf("주민번호를 입력하세요.(-없이 입력)\n");
   while (true) {
      scanf("%lld", &idNum);
        

      // 현재 날짜 정보 추출
      time_t t = time(NULL);
      struct tm *now = localtime(&t);
      todayYear = now->tm_year + 1900;
      todayMonth = now->tm_mon + 1;
      todayDay = now->tm_mday;

      // 생년월일 추출
      birthYear = idNum / 100000000000; // 11개버리고
      birthMonth = (idNum / 1000000000) % 100; // 9개 버리고
      birthDay = (idNum / 10000000) % 100; //7
      flag = (idNum / 1000000) % 10;

      //나이 계산하기


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
            printf("다시 입력하세요.flag는 1,2,3,4만 가능\n");
            continue;
      }
       age = todayYear - birthYear;
       if(birthMonth > todayMonth) 
   {
      // 생일이 지나지 않음
      age--;
   } else if(birthMonth == todayMonth && birthDay > todayDay)
   {
      // 생일이 지나지 않음
      age--;
   }
   

   



      if ((birthYear % 4 == 0 && birthYear % 100 != 0) || birthYear % 400 == 0) {
         // 윤년인 경우 2월까지 29일 가능
         if (birthMonth == 2 && birthDay > 29) {
            printf("다시 입력하세요. 29일까지입니다.\n");
            continue;
         }
      } else {
         // 평년인 경우 2월까지 28일 가능
         if (birthMonth == 2 && birthDay > 28) {
            printf("다시 입력하세요. 28일까지입니다.\n");
            continue;
         }
      }
	if (birthMonth == 4 || birthMonth == 6 || birthMonth == 9 || birthMonth == 11) {
         if (birthDay > 30) {
            printf("다시 입력하세요. 30일까지입니다.\n");
            continue;
         }
      }
      	if (birthMonth == 1 || birthMonth == 3 || birthMonth == 5 || birthMonth == 7 || birthMonth == 8 || birthMonth == 10 || birthMonth == 12) {
         if (birthDay > 31) {
            printf("다시 입력하세요. 31일까지입니다.\n");
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
       //printf("%d티켓:\n",price);
    }
    else if(age >=13 && age <=18)
    {
       price =   TEEN_DAY_PRICE;
       tickettype=2;
   //   printf("%d티켓:\n",price);   
    }
    else if(age >=3 && age <=12)
    {
       price =   CHILD_DAY_PRICE;
       tickettype=3;
    //   printf("%d티켓:\n",price);
    }
    else if( age >= 65)
    {
       price =   OLD_DAY_PRICE;
       tickettype=4;
    //   printf("%d티켓:\n",price);
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
//    printf("%d티켓:\n",price);
    }
      
//   orderList[1]= tickettype;
//   printf("list 1번 : %d\n",orderList[1]);
	ageList[totalordercount]= tickettype;
    
     
       
    
   int count;
   printf("몇개를 주문하시겠습니까? (최대 10개)\n");
   
   while(true)
   {
	   scanf("%d", &count);
	   if(count >=1 && count<=10)
	   {
//	   	orderList[2]=count;
//	   	printf("list 2번 : %d\n",orderList[2]);
	   	
	   	break;
	   }
	   else{
	   		printf("다시 입력해주세요.\n");
	   }
	   
   }
         countList[totalordercount]= count;
        
	  
   
   
   int first; 
   printf("우대사항을 선택하세요.\n");
   printf("1. 없음 (나이 우대는 자동처리)\n");
   printf("2. 장애인\n");
   printf("3. 국가유공자\n");
   printf("4. 다자녀\n");
   printf("5. 임산부\n");
      while(true)
   {
	   scanf("%d", &first);
	   if(first >=1 && first<=5)
	   {
//	   	orderList[4]= first;
//	   	printf("list 2번 : %d\n",orderList[4]);
	   	
	   	break;
	   }
	   else{
	   		printf("다시 입력해주세요.\n");
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
   printf("가격은 %.0f 원 입니다.\n", total);
//   orderList[3]= total;
//   printf("list 3번 : %d\n",orderList[3]);
   totalList[totalordercount]= total;
   
   printf("감사합니다.\n", total);

   int end;
  
   printf("계속 발권하시겠습니까?\n");
   printf("1. 티켓 발권\n");
   printf("2. 종료\n"); 
   scanf("%d", &end);
   
		if(end == 2) {
			break;
		} 
		totalordercount++;
	}

//   printf("티켓 발권을 종료합니다. 감사합니다.\n\n");
//   
//   printf("==================== 에버랜드 ====================\n");
   
	for(int index = 0; index <= totalordercount; index++){
		
			switch(ticketList[index]){
   			case 1 : printf("주간권 ");
   				break;
   			case 2: printf("야간권 ");
   				break;
		   }
		switch(ageList[index]){
   			case 1 : printf("대인 X ");
   				break;
   			case 2: printf("청소년 X");
   				break;
   			case 3: printf("소인 X");
   				break;
   			case 4: printf("경로 X");
   				break;
   			case 5: printf("유아 X");
   				break;
		   }
		if(countList[index] != 0){
			
			printf("%d", countList[index]);
		}
		
		if(totalList[index] >= 0){
			printf(" %d", totalList[index]);
		}
		switch(firstList[index]){
   			case 1 : printf(" *우대적용 없음\n");
   				break;
   			case 2: printf(" *장애인 우대적용\n");
   				break;
   			case 3: printf(" *국가유공자 우대적용\n");
   				break;
            case 4 :  printf(" *다자녀 우대적용\n");
                break;
            case 5 :  printf(" *임산부 우대적용\n");
                break;
}
		sum += totalList[index];
		
		
		}
		printf("입장료의 총액은 %d입니다.\n",sum);
		int ing; 
		printf("계속 진행(1: 새로운 주문, 2: 프로그램 종료):");
		scanf("%d",&ing);
		if(ing == 2){

	break;
	}
	ticketList[10]=0, ageList[10]=0, countList[10]=0, firstList[10]=0, totalList[10]=0, totalordercount =0 ;
}

}


   





    

