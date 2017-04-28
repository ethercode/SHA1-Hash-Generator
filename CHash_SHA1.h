#ifndef SHA1_H
#define SHA1_H

struct SSHA1Context
{
    unsigned int    total[2];
    unsigned int    state[5];
    unsigned char   buffer[64];
};

struct SHashCode160
{
    unsigned char   data[20];
};

class CHash_SHA1
{
public:
    void        hash(char* data, int size, struct SHashCode160* hc);
private:
    static void sha1_starts(struct SSHA1Context* ctx);
    static void sha1_process(struct SSHA1Context* ctx, unsigned char data[64]);
    static void sha1_update(struct SSHA1Context* ctx, unsigned char* input, unsigned int length);
    static void sha1_finish(struct SSHA1Context* ctx, unsigned char digest[20]);
};

#endif
