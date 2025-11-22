//arrays wala i=0, loops wala i=1
#include<stdio.h>
int main() {
	
    for(int i=1; i<=5; i++) {  //me line ek mehemai astric patterns wlta
        for(int j=1; j<=i; j++) {             
            printf("* ");
        }
        printf("\n");
    }

	printf("\n\n");                               //01
////////////////////////////////////////////////////////////////////
    for(int i=1; i<=5; i++) {
        for(int j=5; j>=i; j--) {
            printf("* ");
        }
        printf("\n");
    }	
    
	printf("\n\n");                               //02
////////////////////////////////////////////////////////////////////
    for(int i=1; i<=5; i++) {
        for(int j=4; j>=i; j--) {
            printf("  ");
        }
        for(int j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
	
	printf("\n\n");                               //03 me  
another option: add 02 and 01 
////////////////////////////////////////////////////////////////////

    for(int i=1; i<=5; i++) {
        for(int j=2; j<=i; j++) {
            printf("  ");
        }
        for(int j=1; j<=5; j++) {
            printf("* ");
        }
        printf("\n");
    }


	printf("\n\n");                               //04 me
another option: add 01 and 02
////////////////////////////////////////////////////////////////////


	for(int i=1;i<=5;i++){
		for(int j=5;j>=i;j--){
			printf("  ");
		}
		for(int j=1;j<i;j++){
			printf("* ");
		}
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	printf("\n\n");                               //05
////////////////////////////////////////////////////////////////////

	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			printf("  ");
		}
		for(int j=5;j>i;j--){
			printf("* ");
		}
		for(int j=5;j>=i;j--){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n\n");                               //06
////////////////////////////////////////////////////////////////////


   for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            printf("  ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("* ");
        }
        printf("\n");
    }						      //new
////////////////////////////////////////////////////////////////////
	return 0;
}

/*


   *                  * * * * *                 *           * * * * *                       *                 * * * * * * * * *
   * *                * * * *                 * *             * * * *                     * * *                 * * * * * * *
   * * *              * * *                 * * *               * * *                   * * * * *                 * * * * *
   * * * *            * *                 * * * *                 * *                 * * * * * * *                 * * *
   * * * * *          *                 * * * * *                   *               * * * * * * * * *                 *

 	 01                 02                  03                  04                          05                        06



	        *	   1  		 					            * 	      1           * * * * *
	      * * *        3							           * *        2            * * * *
	    * * * * *	   5							          * * *       3             * * *
	  * * * * * * *    7						                 * * * *      4              * *
	* * * * * * * * *  9		 					        * * * * *     5               *

	//for loop 3kin			                         	//03 weni loop eke space 1k ain krla       //04 weni loop eke space 1k ain krla



	
		*          1  		         
	      * * *        3		        
	    * * * * *	   5		   
 	  * * * * * * *    7		       
	* * * * * * * * *  9		      

		//new			
	

*/

