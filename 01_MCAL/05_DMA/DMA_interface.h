#ifndef DMA_INTERFACE_H
#define DMA_INTERFACE_H


/*Funcion to init DMA*/
void MDMA2_vStreamInit(void);
/*Function to set adress of sourse & distination,block size*/ 
void MDMA2_vSetAdresses(u32 *Ptr_SrcAdd,u32 *Ptr_DisAdd,u32 Copy_u32Size);

void MDMA_vEnable(void);
#endif
