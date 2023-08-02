bool isEqualCaseInsensitive(string s1, string s2) {
	for (unsigned int i = 0; i < s1.size(); i++){
		if(s1[i] >= 'a' && s1[i] <= 'z'){
			s1[i] -= 32;
		}
	}
	for (unsigned int i = 0; i < s2.size(); i++){
		if(s2[i] >= 'a' && s2[i] <= 'z'){
			s2[i] -= 32;
		}
	}
	if (s1 == s2) {
		return true;
	}
	return false;
}