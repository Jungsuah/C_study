#include<stdio.h>
#include<math.h>

int main(){
	
	int student,study;
	printf("����� �Է�: ");
	scanf("%d", &study);
	
	printf("�л��� �Է�: ");
	scanf("%d", &student);
	

	int score[student][study] = {0};
	int sum[21] = {0};
	int total[10] = {0};
	float avg[10] = {0};
	float avg1[10] = {0};
	
	for(int i = 0; i < student; i++){
		printf("%d��° �л��� ���� %d�� ���ʴ�� �Է��ϼ���. :", i+1, study);
		for(int j = 0; j < study; j++){
			scanf("%d", &score[i][j]);
			
			sum[i] +=  score[i][j];
			avg[i] = float(sum[i]) / 3;
			
			total[j] += score[j][i];
			avg1[j] = float(total[j]) / 3;
		}
	}
	
	for(int i = 0; i < student; i++){
		printf("%d�л��� ������ ������ %d��, ����� %.2f �Դϴ�.\n",i+1, sum[i],avg[i]);
	}
	for(int j = 0; j < study; j++){
		printf("����%d�� �հ�: %d ��ü��� : %.2f��.\n", j+1, total[j],avg1[j]);
	}	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

