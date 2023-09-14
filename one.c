 #include<stdio.h>
 void main(){
 	
 	int arr[10],i,sum=0,sump=0;
 	printf("entre any value ");
 	for( i=0;i<10;i++)
	 {
	 
 	scanf("%d",&arr[i]);
 	
   }
 printf("arr element are");
 for( i=0;i<10;i++){
 	if(arr[i]%2==0){
 		sum=sum+arr[i];
 		}

 	 else{
 	 	sump=sump=arr[i];
 	 	
	  }
}
  
 	printf("\nsum of even num arrid =%d\n",sum);
 
 printf("sum of arr odd  num is %d",sump);
 	
	
}
