#ifndef __I965_ENCODER_UTILS_H__
#define __I965_ENCODER_UTILS_H__

int 
build_avc_slice_header(VAEncSequenceParameterBufferH264 *sps_param,
                       VAEncPictureParameterBufferH264 *pic_param,
                       VAEncSliceParameterBufferH264 *slice_param,
                       VAEncH264DecRefPicMarkingBuffer *dec_ref_pic_marking_param,
                       unsigned char **slice_header_buffer);
int 
build_avc_sei_buffering_period(int cpb_removal_length,
                               unsigned int init_cpb_removal_delay, 
                               unsigned int init_cpb_removal_delay_offset,
                               unsigned char **sei_buffer);

int
build_avc_sei_pic_timing(unsigned int cpb_removal_length, unsigned int cpb_removal_delay, 
                         unsigned int dpb_output_length, unsigned int dpb_output_delay,
                         unsigned char **sei_buffer);

#endif /* __I965_ENCODER_UTILS_H__ */
