#include <stdio.h>
int main(){
	int phantu;
	int diem = 0, sum = 0; 
	int phantumoi;
	int vitri; 
	int luachon;
	int arr[100];
	do{
		printf("---MENU---\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra gia tri cac phan tu trong mang\n");
		printf("3. Dem so luong cac so hoan hao trong mang\n");
		printf("4. Tim gia tri nho thu hai trong mang\n");
		printf("5. Them mot phan tu vao vi tri dau tien trong mang\n");
		printf("6. Xoa phan tu tai vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu giam dan\n");
		printf("8. Tim kiem phan tu trong mang\n");
		printf("9. Sap xep lai mang va hien thi (so le dung truoc, so chan dung sau)\n");
		printf("10. Dao nguoc thu tu cua cac phan tu trong mang\n");
	    printf("11. Thoat\n");
		printf("Moi ban nhap lua chon: ");
		scanf("%d", &luachon);
		switch(luachon) {
			case 1:
				printf("Nhap so phan tu cua mang :");
				scanf("%d", &phantu);
				printf("Nhap cac gia tri cho mang: ");
				for (int i = 0; i < phantu; i++) {
					scanf("%d", &arr[i]);
				}
				printf("Mang vua nhap la: ");
				for (int i = 0; i < phantu; i++) {
					printf("%d ", arr[i]);
				}
			break;	
			case 2:
				printf("Mang vua nhap la: ");
				for (int i = 0; i < phantu; i++) {
					printf("arr[%d] = %d\n", i, arr[i]);
				}
			break;
			case 3:
				printf("So luong cac so hoan hao trong mang la: %d\n", diem);
				for (int i = 0; i < phantu; i++) {
					for (int j = 1; j <= arr[i] / 2; j++) {
						if (arr[i] % j == 0) {
							sum += j;
						}
					}
					if (sum == arr[i]) {
						diem++;
					}
				}
			break;
			case 4:
				printf("Tim gia tri nho thu 2 trong mang: ");
			break;
			case 5:
				arr[0] == phantumoi;
				printf("Nhap phan tu moi can them vao vi tri dau tien: ");
				scanf("%d", &phantumoi);
				printf("Mang sau khi them phan tu moi vao vi tri dau tien: ");
				for (int i = 0; i <= phantu; i++) {
					printf("%d ", arr[i]);
				}
				printf("\n");
			break;
			case 6:
				printf("Nhap vi tri can xoa (0 den %d): ", phantu - 1);
				scanf("%d", &vitri);
				if (vitri < 0 || vitri >= phantu) {
					printf("Vi tri khong hop le!\n");
				} else {
					for (int i = vitri; i < phantu - 1; i++) {
						arr[i] = arr[i + 1];
					}
					phantu--;
					printf("Mang sau khi xoa phan tu tai vi tri %d: ", vitri);
					for (int i = 0; i < phantu; i++) {
						printf("%d ", arr[i]);
					}
					printf("\n");
				} 
			break;
			case 7:
				printf("Mang sau khi sap xep theo thu tu giam dan: ");
				for (int i = 0; i < phantu - 1; i++) {
					int max = i;
					for (int j = i + 1; j < phantu; j++) {
						if (arr[j] > arr[max]) {
							max = j;
						}
					}
					int temp = arr[max];
					arr[max] = arr[i];
					arr[i] = temp;
				}
				printf("Mang sau khi sap xep theo thu tu giam dan: ");
				for (int i = 0; i < phantu; i++) {
					printf("%d ", arr[i]);
				}
				printf("\n");
			break;
			case 11:
				printf("Thoat chuong trinh\n");
			 break;
			 default:
                printf("Lua chon khong hop le\n");
                break;
		}
	}while(luachon!=11);

    return 0; 
}
