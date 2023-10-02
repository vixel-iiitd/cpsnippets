
vi Z(string S) {
	vi z(S.size());
	int l = -1, r = -1;
	rep(i,1,S.size()) {
		z[i] = i >= r ? 0 : min(r - i, z[i - l]);
		while (i + z[i] < S.size() && S[i + z[i]] == S[z[i]])
			z[i]++;
		if (i + z[i] > r)
			l = i, r = i + z[i];
	}
	return z;
}
