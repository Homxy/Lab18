void myString(char *&p, int n){
	p = new char[n];    
	for(int i = 0; i < n;i++) p[i] = 'A'+i;
	p[n] = 0;
}
