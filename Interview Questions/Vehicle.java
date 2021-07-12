class Vehicle {
	private String registrationNo;
	private int modelNo;
	
	Vehicle(String registrationNo, int modelNo){
		this.registrationNo = registrationNo;
		this.modelNo = modelNo;
	}
	
	public String getRegistrationNo(){
		return this.registrationNo;
	}

	public int getModelNo(){
		return this.modelNo;
	}
}