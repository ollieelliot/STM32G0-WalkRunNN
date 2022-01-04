#include <eml_net.h>
static const float runwalkNN_acc_layer0_weights[36] = { -1.393847f, -0.200540f, 0.423746f, -0.041029f, 0.159351f, 1.820291f, -0.043781f, -2.248864f, 0.262682f, -0.045553f, 1.810682f, 0.166443f, 0.817225f, 0.234286f, -1.141514f, -1.073970f, -0.323762f, 0.384065f, -1.095843f, 1.750015f, -0.602274f, -1.317098f, -0.104173f, -0.702623f, 4.207991f, 4.874552f, 0.750292f, 0.662218f, 0.194889f, -1.080376f, 0.719134f, -0.974870f, -0.041055f, 0.836149f, -0.736863f, 0.640965f };
static const float runwalkNN_acc_layer0_biases[12] = { 1.178146f, 0.705969f, 0.573204f, 0.170770f, 0.311191f, 0.704485f, 0.242852f, 0.160589f, 0.310474f, 0.303950f, 0.405543f, 0.328727f };
static const float runwalkNN_acc_layer1_weights[12] = { 2.390296f, 3.726248f, -0.960125f, -0.957371f, -0.531259f, 1.313482f, -1.057268f, 1.777458f, -0.614134f, -0.820816f, 1.629579f, -0.876600f };
static const float runwalkNN_acc_layer1_biases[1] = { 0.168017f };
static float runwalkNN_acc_buf1[12];
static float runwalkNN_acc_buf2[12];
static const EmlNetLayer runwalkNN_acc_layers[2] = { 
{ 12, 3, runwalkNN_acc_layer0_weights, runwalkNN_acc_layer0_biases, EmlNetActivationRelu }, 
{ 1, 12, runwalkNN_acc_layer1_weights, runwalkNN_acc_layer1_biases, EmlNetActivationLogistic } };
static EmlNet runwalkNN_acc = { 2, runwalkNN_acc_layers, runwalkNN_acc_buf1, runwalkNN_acc_buf2, 12 };