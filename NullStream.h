#ifndef NULLSTREAM_H
#define NULLSTREAM_H

#include <streambuf>
#include <ostream>

class NullBuffer : public std::streambuf
{
	public:
		NullBuffer() : std::streambuf() {}
		int overflow(int c) { return c; }
};

class NullStream : public std::ostream
{
	public:
		NullStream() : std::ostream(&nullbuf) {}
	private:
		NullBuffer nullbuf;
};


//extern NullStream cnotout;


#endif  // NULLSTREAM_H
