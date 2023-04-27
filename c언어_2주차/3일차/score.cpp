#include<stdio.h>
#include<math.h>

int main(){
	
	int student,study;
	printf("과목수 입력: ");
	scanf("%d", &study);
	
	printf("학생수 입력: ");
	scanf("%d", &student);
	

	int score[student][study] = {0};
	int sum[21] = {0};
	int total[10] = {0};
	float avg[10] = {0};
	float avg1[10] = {0};
	
	for(int i = 0; i < student; i++){
		printf("%d번째 학생의 점수 %d를 차례대로 입력하세요. :", i+1, study);
		for(int j = 0; j < study; j++){
			scanf("%d", &score[i][j]);
			
			sum[i] +=  score[i][j];
			avg[i] = float(sum[i]) / 3;
			
			total[j] += score[j][i];
			avg1[j] = float(total[j]) / 3;
		}
	}
	
	for(int i = 0; i < student; i++){
		printf("%d학생의 과목의 총점은 %d점, 평균은 %.2f 입니다.\n",i+1, sum[i],avg[i]);
	}
	for(int j = 0; j < study; j++){
		printf("과목%d의 합계: %d 전체평균 : %.2f점.\n", j+1, total[j],avg1[j]);
	}	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

