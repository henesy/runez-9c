#define max_u8int ^((u8int)0)

// Encodes a rune and a position for decompression
typedef struct Pair Pair;
struct Pair {
	Rune	R;
	u8int	P;
};
