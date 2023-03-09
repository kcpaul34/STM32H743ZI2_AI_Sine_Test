# STM32H743ZI2_AI_Sine_Test
Latest code to predict Sin(x) radians implemented in STM32H743ZI2 embedded microcontroller.

In the sine_model.h file please look carefully the commented out lines and replacement of new codes. I have replaced the AI DEPRECATED LINES WITH NEW code LINES. Otherwise it was showing errors. Now it is working properly.

//AI_DEPRECATED
//#define AI_SINE_MODEL_IN \
//  ai_sine_model_inputs_get(AI_HANDLE_NULL, NULL)

#define AI_SINE_MODEL_IN { \
  AI_BUFFER_OBJ_INIT(AI_BUFFER_FORMAT_FLOAT, 1, 1, 1, 1, NULL), \
}

#define AI_SINE_MODEL_IN_SIZE { \
  AI_SINE_MODEL_IN_1_SIZE, \
}
#define AI_SINE_MODEL_IN_SIZE_BYTES { \
  AI_SINE_MODEL_IN_1_SIZE_BYTES, \
}
#define AI_SINE_MODEL_IN_1_CHANNEL     (1)
#define AI_SINE_MODEL_IN_1_SIZE        (1)
#define AI_SINE_MODEL_IN_1_SIZE_BYTES  (4)

/******************************************************************************/
#define AI_SINE_MODEL_OUT_NUM       (1)

//AI_DEPRECATED
//#define AI_SINE_MODEL_OUT \
//  ai_sine_model_outputs_get(AI_HANDLE_NULL, NULL)

#define AI_SINE_MODEL_OUT { \
  AI_BUFFER_OBJ_INIT(AI_BUFFER_FORMAT_FLOAT, 1, 1, 1, 1, NULL), \
}
