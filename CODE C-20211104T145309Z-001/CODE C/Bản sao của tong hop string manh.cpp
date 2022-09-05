//xoa tat ca khoang trang trong chuoi 
void xoakt(char s[90],int i){
	int j;
     for(j=i;j<strlen(s);j++)
     s[j]=s[j+1];
}
int main(){
    char s[90];
    int i;
    printf("nhap chuoi: ");
    gets(s);
    for(i=0;i<strlen(s);i++)
    if(s[i]==' '){
        xoakt(s,i);
        i--;
    }
    printf("%s",s);
    getch();
    return 0;
}

//viet hoa chu cai dau 
void viethoa(char c[]){
	c[0]=toupper (c[0]);  // vi tri dong 1 viet hoa
	for(int i=1;i<strlen(c);i++)
	c[i]=tolower(c[i]);// vi tri dong sau do viet thuong
}
int main(){
	char c[1000];
	gets(c);// nhap vao chuoi
	char a[100][100],*token;
	token=strtok(c," ");
	int n=0;// dem so luong tu trong ten nguoi dung
	while(token!='\0'){
		strcpy(a[n],token);
		n++;
		token=strtok('\0'," ");
	}
	for(int i=0;i<n;i++){
		viethoa(a[i]);
		printf("%s ",a[i]);
	}
}

//vi tri xuat hien cua ki tu bat ki
int main() {
    char s[1000];
    char c;
    int i;
    gets(s);
    scanf("%c",&c);
    int index = -1;
    for (i = 0; i <strlen(s); i++) {
        if (s[i] == c) {
            index = i;
            break;
        }
    }
    printf("%d",index);
}

//tu xuat hien nhieu nhat
int main(){
	char c[1000],a[100][100];
	gets(c);
	strlwr(c);
	int n=0, i, j;
	char *token=strtok(c," ");
    while(token!=NULL){
    	strcpy(a[n++],token);
    	token=strtok(NULL," ");
	}
	int max=0;
	char res[100];// luu tu xuat hien nhieu nhat
	for(i=0;i<n;i++){
		int count=1;
		for(j=i+1;j<n;j++){
			if(strcmp(a[i],a[j])==0)
			count++;
		}
		if(count>max){
			max=count;
			strcpy(res,a[i]);
		}
	}
	printf("%s %d",res,max);
}

//tu dai nhat va ngan nhat trong strng
int main(){
	char c[1000];
	gets(c);// nhap vao chuoi
	char a[100][100],*token;
	token=strtok(c," ");
	int n=0;// dem so luong tu trong ten nguoi dung
	while(token!='\0'){
          strcpy(a[n++],token);
          token=strtok(NULL," ");
    }
    int len_max=0,len_min=1000;
    char word_max[100], word_min[100];
    for(int i=0;i<n;i++){
    	int len=strlen(a[i]);
    	if(len>len_max){
    		len_max=len;
    		strcpy(word_max,a[i]);
		}
		if(len<len_min){
			len_min=len;
			strcpy(word_min,a[i]);
		}
		
	}
	printf("%s\n %s",word_max, word_min);
}

//tong cac phan tu trong string
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		int i;
		char c[1000];
		gets(c);
		int sum=0;
		for(i=0;i<strlen(c);i++){
			sum+=c[i]-'0';
		}
		printf("%d\n",sum);
	}
}

//them gach ngang vào sau
int is_digit(char c){
	return '0' <= c && c <= '9';
}
int main(){
	char s[10000];
	gets(s);

	for (int i = 0, len = strlen(s); i < len - 1; i++)
	{

		if (is_digit(s[i]) != is_digit(s[i + 1]))
		{
			memcpy(s + i + 2, s + i + 1, len - i);
			s[++i] = '-';
			len++;
		}
	}

	printf(s);
	return 0;
}

//so luong ki tu khac nhau trong string
int main(){
	int t; // so luong test case
	scanf("%d",&t);
	while(t--){
		int i;
		getchar();
		char c[1000];
		gets(c);
		int a[256]={0};
		for(i=0;i<strlen(c);i++){
			a[c[i]]=1;
			
		}
	    int count=0;
	    for(i=0;i<256;i++){
		count+=a[i];
	    }
	    printf("%d",count);
	}
}

//in hoa chu cai dau
void lower(char c[]){
	int i;
	for(i=0;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
}
int main(){
	char c[1000];
	gets(c);
	lower(c);
	printf("%s",c);
	return 0;
}

//xap xep cac ki tu trong chuoi theo bang chu cai
int main (void) {
	char c[1000];
	gets(c);
	char temp;
	int i, j;
	int size = strlen(c);
	printf("Chuoi truoc khi sap xep: %s \n", c);
	for (i = 0; i < size-1; i++) {
		for (j = i+1; j < size; j++) {
			if (c[i] > c[j]) {
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	printf("\nChuoi sau khi sap xep %s \n ", c);
	return 0;
}

//loai bo nhung tu trung nhau trong string
int main(){
	char c[1000],a[100][100];
	gets(c);
	int n=0;
	char *token=strtok(c," ");
    while(token!=NULL){
    	strcpy(a[n++],token);
    	token=strtok(NULL," ");
	}
	int i, j;
	for(i=0;i<n;i++){
		int ok=1; // check xem co tu nao giong no khong
		for(j=0;j<i;j++){
			if(strcmp(a[i],a[j])==0){
				ok=0;
				break;
			}
		}
		if(ok){
			printf("%s ",a[i]);
		}
	}
}

//loai bo 1 va 0
int main(){
	int i;
	char c[10000];
	scanf("%s",c);
	int c0=0,c1=0;
	for(i=0;i<strlen(c);i++){
		if(c[i]=='0')
		c0++;
		else c1++;
	}   
	printf("%d",abs(c0-c1)); // in ra so ky tu con lai
}

//kiem tra xem chuoi co giong nhau hay khong
int main(){
	char a[100],b[100];
	gets(a);
	gets(b);
	if(strcmp(a,b)==0){
		printf("same");
    }else{
    	printf("diff");
	}
	return 0;
}

//in ra tu va so lan xuat hien cua tu do
int main(){
	char c[1000],a[100][100];
	gets(c);
	strlwr(c);
	int n=0,b[100]={0};
	char *token=strtok(c," ");
    while(token!=NULL){
    	strcpy(a[n++],token);
    	token=strtok(NULL," ");
	}
	int i, j;
	for(i=0;i<n;i++){
		if(b[i]==0){
			int count=1;
			for(j=i+1;j<n;j++){
				if(strcmp(a[i],a[j])==0){
					count++;
					b[j]=1;// xet roi
				}
			}
			printf("%s %d\n",a[i],count);
		}
	}
}

//in chuoi ra ki tu thuong
int main(){
	char c[1000];
	scanf("%s",c);
	int lower=0,upper=0;
	int i;
	for(i=0;i<strlen(c);i++){
		if(isupper(c[i]))
		upper++;
		else
		lower++;
	}
	if(lower>=upper){
		printf("%s",strlwr(c));
	}else
	printf("%s",strupr(c));
}

//dem so luong tu khac nhau trong cau
int main(){
	char c[1000],a[100][100];
	gets(c);
	strlwr(c);
	int n=0;
	char *token=strtok(c," ");
    while(token!=NULL){
    	strcpy(a[n++],token);
    	token=strtok(NULL," ");
	}
	int b[100]={0};
	int i, j;
	for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(strcmp(a[i],a[j])==0){
					b[j]=1;// xet roi
				}
			}
		}
	int count=0;
	for(i=0;i<n;i++){
		if(b[i]==0)
		count++;
		}
	printf("%d",count);
}

//dem ki tu thuong trong 1 string
int main(){
	char c[1000];
	gets(c);
	int count=0;
	for(int i=0;i<strlen(c);i++){
		if(islower(c[i])){
			count++;
		}
	}
	printf("%d",count);
}

//dem ki tu so trong chuoi 
int main(){
	char c[1000];
	printf("INPUT string : ");
	gets(c);
	int count=0;
	for(int i=0;i<strlen(c);i++){
		if(c[i]>'0' && c[i]<='9')
		count++;
	}
	printf("co %d ki tu so",count);
	return 0;
}

//sap xep cac ki tu trong chuoi theo bang mac ASCII 
int main (void) {
   char string[100];
   	printf("Enter a string s: ");
	fflush(stdin);
	gets(string);
   char temp;
   int i, j; 
   int size = strlen(string);
   printf("Chuoi truoc khi sap xep: %s \n", string);
   for (i = 0; i < size-1; i++) {
      for (j = i+1; j < size; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
   printf("\nChuoi sau khi sap xep %s \n", string);
   return 0;
}

//dao nguoc cac tu trong chuoi 
int string_length(char s[]) {
	int i=0;
	while(s[i]!='\0')
		i++;
	return i;
}
void string_reverse(char str[]) {
	int i, j, len;
	char ch;
	j = len = string_length(str) - 1;
	i = 0;
	while(i < j) {
		ch = str[j];
		str[j] = str[i];
		str[i] = ch;
		i++;
		j--;
	}
}
int main (void) {
	char s1[100];
	printf("Enter a string s1:\n");
	fflush(stdin);
	gets(s1);
	char reverse[100] = "";
	char temp[50];
	int i, j, n;
	n = string_length(s1);
	for(i = n-1; i >= 0; --i) {
		for(j = 0; i >= 0 && s1[i] != ' '; --i,++j)
			temp[j] = s1[i];
		temp[j] = '\0';
		string_reverse(temp);
		strcat(reverse, temp);
		strcat(reverse, " ");
	}
	printf("Chuoi ban dau: %s", s1);
	printf("\nChuoi sau khi da duoc dao nguoc: %s",reverse);
	return 0;
}
