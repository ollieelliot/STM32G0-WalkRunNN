#include <eml_net.h>
static const float runwalkNN_noZ_layer0_weights[24] = { -0.125385f, -0.275137f, -0.139324f, -1.293642f, 1.593356f, -0.859261f, -1.470882f, 1.491044f, -0.010255f, 1.714596f, 0.013548f, -0.638231f, 0.220770f, -1.855141f, -1.123188f, 1.187608f, -0.023297f, 0.859719f, 0.954994f, -0.423841f, 0.196563f, 0.425042f, 0.056383f, -1.639446f };
static const float runwalkNN_noZ_layer0_biases[12] = { -0.226942f, 0.685502f, 0.566188f, 1.454320f, 0.530368f, 1.014782f, 1.368430f, 0.210483f, -0.170186f, 1.011599f, -0.070311f, 0.671378f };
static const float runwalkNN_noZ_layer1_weights[12] = { -0.331991f, -1.074821f, -1.488217f, 1.634980f, 1.582912f, 2.224153f, 1.432769f, 1.515249f, -0.223077f, 1.359091f, -0.523483f, -1.112987f };
static const float runwalkNN_noZ_layer1_biases[1] = { -0.144897f };
static float runwalkNN_noZ_buf1[12];
static float runwalkNN_noZ_buf2[12];
static const EmlNetLayer runwalkNN_noZ_layers[2] = { 
{ 12, 2, runwalkNN_noZ_layer0_weights, runwalkNN_noZ_layer0_biases, EmlNetActivationRelu }, 
{ 1, 12, runwalkNN_noZ_layer1_weights, runwalkNN_noZ_layer1_biases, EmlNetActivationLogistic } };
static EmlNet runwalkNN_noZ = { 2, runwalkNN_noZ_layers, runwalkNN_noZ_buf1, runwalkNN_noZ_buf2, 12 };