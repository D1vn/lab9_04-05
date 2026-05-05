int main()
{
	int a[]={1,2,3,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	int k;

	print("¬ведите число: ");
	scanf("%d",&k);

	printf("–езультат:\n");
	for (int i=0; i<n;i++){
		printf("%d",a[i]*k);
	}
		printf("\n")
	return 0;
}