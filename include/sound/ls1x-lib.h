#ifndef LS1X_LIB_H
#define LS1X_LIB_H

#include <linux/platform_device.h>
#include <sound/ac97_codec.h>

/* PCM */

struct ls1x_pcm_dma_params {
	char *name;			/* stream identifier */
//	u32 dcmd;			/* DMA descriptor dcmd field */
//	volatile u32 *drcmr;		/* the DMA request channel to use */
	u32 dev_addr;			/* device physical address for DMA */
};

extern int __ls1x_pcm_hw_params(struct snd_pcm_substream *substream,
				struct snd_pcm_hw_params *params);
extern int __ls1x_pcm_hw_free(struct snd_pcm_substream *substream);
extern int ls1x_pcm_trigger(struct snd_pcm_substream *substream, int cmd);
extern snd_pcm_uframes_t ls1x_pcm_pointer(struct snd_pcm_substream *substream);
extern int __ls1x_pcm_prepare(struct snd_pcm_substream *substream);
extern inline void ls1x_pcm_dma_irq(int dma_ch, void *dev_id);
extern int __ls1x_pcm_open(struct snd_pcm_substream *substream);
extern int __ls1x_pcm_close(struct snd_pcm_substream *substream);
extern int ls1x_pcm_mmap(struct snd_pcm_substream *substream,
	struct vm_area_struct *vma);
extern int ls1x_pcm_preallocate_dma_buffer(struct snd_pcm *pcm, int stream);
extern void ls1x_pcm_free_dma_buffers(struct snd_pcm *pcm);

/* AC97 */

extern unsigned short ls1x_ac97_read(struct snd_ac97 *ac97, unsigned short reg);
extern void ls1x_ac97_write(struct snd_ac97 *ac97, unsigned short reg, unsigned short val);

extern bool ls1x_ac97_try_warm_reset(struct snd_ac97 *ac97);
extern bool ls1x_ac97_try_cold_reset(struct snd_ac97 *ac97);
extern void ls1x_ac97_finish_reset(struct snd_ac97 *ac97);

extern int ls1x_ac97_hw_suspend(void);
extern int ls1x_ac97_hw_resume(void);

extern int ls1x_ac97_hw_probe(struct platform_device *dev);
extern void ls1x_ac97_hw_remove(struct platform_device *dev);

extern void ls1x_ac97_channel_config_out(uint32_t conf);
extern void ls1x_ac97_channel_config_in(uint32_t conf);

#endif