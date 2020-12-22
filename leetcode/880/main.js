/**
 * @param {string} S
 * @param {number} K
 * @return {string}
 */
var decodeAtIndex = function(S, K) {
	let result = 0n;
    K = BigInt(K);
	let N = S.length;

	for (let c of S) {
		if ('0' <= c && c <= '9')
			result *= BigInt(c);
		else
			result++;
	}

	for (let i = N - 1; i >= 0; --i) {
        let c = S[i];
		K %= result;
		if (K == 0 && ('a' <= c && c <= 'z'))
			return c;
		if ('0' <= c && c <= '9')
			result /= BigInt(c);
		else
			result--;
	}
	return '';
}