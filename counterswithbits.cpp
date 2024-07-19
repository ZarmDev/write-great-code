
// Using modulo
cntr = (cntr + 1 ) % n;

// Traditional method
cntr = 0


// Using AND
// 0x1f is 31 or 011111
cntr = (cntr + 1) & 0x1f;
// if cntr = 31 it makes sense:
// 011111 & 011111

// in assembly
inc( eax );  // compute
(eax + 1) mod 32
and( $1f, eax );
