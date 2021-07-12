class Car extends Vehicle {
	public static int calculateSalary(String[] slabint, String[] perint, String[] empTaxint, int rebate){
        int income = 0;
        for(int i = 0;i<empTaxint.length; i++){
            int j = 0;
            while(Integer.parseInt(empTaxint[i])>Integer.parseInt(slabint[j])*Integer.parseInt(perint[j]) && j<empTaxint.length){
                income += Integer.parseInt(slabint[j]);
                j++;
            }
            if(j!=empTaxint.length)
            income+=rebate;
        }
    }
}