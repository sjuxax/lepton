
class SimpleComponentDecoder {
    bool started_scan[4];
    int cmp;
    int cur_read_batch[4];
public:
    SimpleComponentDecoder();
    DecoderReturnValue simple_decoder(UncompressedComponents* colldata, iostream *str_in);
    static void simple_continuous_decoder(UncompressedComponents* colldata, iostream *str_in);
};
