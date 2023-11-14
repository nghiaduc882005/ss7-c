#include <stdio.h> // sum(tong), is_prime(so nguyen to), factorical(giai thua), reversed(so dao nguoc) 
int main(){
	int n, choice, sum = 0, is_prime = 1, factorial = 1, reversed = 0, perfect_number;  
	printf("Nhap vao 1 so nguyen: ");
	scanf("%d", &n);
	
	do{
		printf("\nINTEGER NUMBER\n");
		printf("1.In ra day so co gia tri nho hon hoac bang n va tinh tong\n");
		printf("2.In ra va dem cac so chia het cho 3 nho hon n\n");
		printf("3.Kiem tra so nguyen co phai so nguyen to khong\n");
		printf("4.Kiem tra so nguyen co phai so hoan hao khong\n");
		printf("5.Tinh tong cac uoc so cua n\n");
		printf("6.Tinh giai thua n\n");
		printf("7.In ra so dao nguoc cua n\n");
		printf("8.In ra cac so nguyen to tu 1-n\n");
		printf("9.Thoat\n");
		
		printf("Nhap lua chon cua ban:");
		scanf("%d", &choice);
		
		switch(choice){
			case 1: //In ra day so co gia tri nho hon hoac bang n va tinh tong
				printf("Day so co gia tri nho hon hoac bang n : ");
				for(int i = 1; i <= n; i++){
					    printf("%d\n", i);
				        sum +=i;
				    }
				printf("\nTong cua cac so la: %d\n ", sum);
				break;
			case 2: //In ra va dem cac so chia het cho 3 nho hon n
				printf("cac so chia het cho 3 nho hon n\n");
				for(int i = 1; i < n; i++ ){
					if(i % 3 == 0){
						printf("%d", i);
					}
				break;
				}
			case 3: //So nguyen to la so tu nhien lon hon 1 khong phai la tich cua hai so tu nhien nho hon.
				for(int i = 2; i < n; i++){
					if (n % i == 0) {
                        is_prime = 0;
                        break;
                    }
                }
                if (is_prime) {
                    printf("%d la so nguyen to.\n", n);
                } else {
                    printf("%d khong la so nguyen to.\n", n);
                }
                break;
            case 4: //So hoan hao la mot so nguyen duong ma tong cac uoc nguyen duong thuc su cua no bang chinh no
                for(int i = 1; i < n; i++){
                	if(n % i == 0){
                	   sum += i;
                	}
                }
                if (sum == n) {
                    printf("%d la so hoan hao. \n", n);
                } else {
                    printf("%d khong la so hoan hao. \n", n);
                }
                break;
            case 5: //Tinh tong cac uoc so cua n
                 printf("Em chua lam duoc\n");
                 break;	
            case 6: //Tinh giai thua n
                for (int i = 1; i <= n; i++) {
                    factorial *= i;
                }
                printf("%d! = %d\n", n, factorial);
                break;
        
            case 7: //In ra so dao nguoc cua n
                while(n!=0){
					reversed = reversed * 10 + n % 10;
					n /= 10;
				}
				printf("So dao nguoc la: %d\n", reversed);
                break;
			case 8: // In ra cac so nguyen to tu 1-n
			    printf("Em chua lam duoc\n");
			    break;
			case 9: //Thoat
			printf("Tam biet!");
				break;
			default:
				printf("Lua chon cua ban khong hop le. Vui long lua chon lai !!");
		}
	} while(choice != 9);
} 
                
            	
            	
            
                		
            	
					
				
							

