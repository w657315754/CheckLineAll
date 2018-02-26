//
// MATLAB Compiler: 5.1 (R2014a)
// Date: Sun Feb 11 16:16:16 2018
// Arguments: "-B" "macro_default" "-W" "cpplib:detLine" "-T" "link:lib" "Init"
// "Detect" "idll" "GetSubRegion" "GetL" "GetDetectRegion" "DrawLineImage"
// "GetBorder" "exLine1" "detLine" 
//

#ifndef __detLine_h
#define __detLine_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" {
#endif

#if defined(__SUNPRO_CC)
/* Solaris shared libraries use __global, rather than mapfiles
 * to define the API exported from a shared library. __global is
 * only necessary when building the library -- files including
 * this header file to use the library do not need the __global
 * declaration; hence the EXPORTING_<library> logic.
 */

#ifdef EXPORTING_detLine
#define PUBLIC_detLine_C_API __global
#else
#define PUBLIC_detLine_C_API /* No import statement needed. */
#endif

#define LIB_detLine_C_API PUBLIC_detLine_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_detLine
#define PUBLIC_detLine_C_API __declspec(dllexport)
#else
#define PUBLIC_detLine_C_API __declspec(dllimport)
#endif

#define LIB_detLine_C_API PUBLIC_detLine_C_API


#else

#define LIB_detLine_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_detLine_C_API 
#define LIB_detLine_C_API /* No special import/export declaration */
#endif

extern LIB_detLine_C_API 
bool MW_CALL_CONV detLineInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_detLine_C_API 
bool MW_CALL_CONV detLineInitialize(void);

extern LIB_detLine_C_API 
void MW_CALL_CONV detLineTerminate(void);



extern LIB_detLine_C_API 
void MW_CALL_CONV detLinePrintStackTrace(void);

extern LIB_detLine_C_API 
bool MW_CALL_CONV mlxInit(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_detLine_C_API 
bool MW_CALL_CONV mlxDetect(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_detLine_C_API 
bool MW_CALL_CONV mlxIdll(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_detLine_C_API 
bool MW_CALL_CONV mlxGetSubRegion(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_detLine_C_API 
bool MW_CALL_CONV mlxGetL(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_detLine_C_API 
bool MW_CALL_CONV mlxGetDetectRegion(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                     *prhs[]);

extern LIB_detLine_C_API 
bool MW_CALL_CONV mlxDrawLineImage(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_detLine_C_API 
bool MW_CALL_CONV mlxGetBorder(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_detLine_C_API 
bool MW_CALL_CONV mlxExLine1(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_detLine_C_API 
bool MW_CALL_CONV mlxDetLine(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_detLine
#define PUBLIC_detLine_CPP_API __declspec(dllexport)
#else
#define PUBLIC_detLine_CPP_API __declspec(dllimport)
#endif

#define LIB_detLine_CPP_API PUBLIC_detLine_CPP_API

#else

#if !defined(LIB_detLine_CPP_API)
#if defined(LIB_detLine_C_API)
#define LIB_detLine_CPP_API LIB_detLine_C_API
#else
#define LIB_detLine_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_detLine_CPP_API void MW_CALL_CONV Init(int nargout, mwArray& xmin, mwArray& ymin, mwArray& xmax, mwArray& ymax, mwArray& pointX, mwArray& pointY, mwArray& mask, mwArray& row_s, mwArray& col_s, mwArray& number, mwArray& L_tmp, const mwArray& NumLine, const mwArray& img0, const mwArray& img, const mwArray& PosLine, const mwArray& dx, const mwArray& dy, const mwArray& d, const mwArray& InitNum);

extern LIB_detLine_CPP_API void MW_CALL_CONV Detect(int nargout, mwArray& Ratio, mwArray& number, mwArray& flag, mwArray& x, mwArray& y, const mwArray& img, const mwArray& img0, const mwArray& xmin, const mwArray& ymin, const mwArray& xmax, const mwArray& ymax, const mwArray& mask, const mwArray& InitNum, const mwArray& number_in1, const mwArray& L_tmp, const mwArray& pointX, const mwArray& pointY, const mwArray& x_in1, const mwArray& y_in1);

extern LIB_detLine_CPP_API void MW_CALL_CONV idll(int nargout, mwArray& lastdata, const mwArray& minv, const mwArray& maxv, const mwArray& data, const mwArray& inper);

extern LIB_detLine_CPP_API void MW_CALL_CONV GetSubRegion(int nargout, mwArray& xmin, mwArray& ymin, mwArray& xmax, mwArray& ymax, mwArray& pointX, mwArray& pointY, const mwArray& NumLine, const mwArray& PosLine, const mwArray& dx, const mwArray& dy);

extern LIB_detLine_CPP_API void MW_CALL_CONV GetL(int nargout, mwArray& L, const mwArray& img, const mwArray& img0, const mwArray& xmin, const mwArray& ymin, const mwArray& xmax, const mwArray& ymax, const mwArray& mask);

extern LIB_detLine_CPP_API void MW_CALL_CONV GetDetectRegion(int nargout, mwArray& mask, const mwArray& NumLine, const mwArray& xmin, const mwArray& ymin, const mwArray& xmax, const mwArray& ymax, const mwArray& pointX, const mwArray& pointY, const mwArray& d);

extern LIB_detLine_CPP_API void MW_CALL_CONV DrawLineImage(int nargout, mwArray& BW_DL, const mwArray& img, const mwArray& x1, const mwArray& y1, const mwArray& x2, const mwArray& y2, const mwArray& val);

extern LIB_detLine_CPP_API void MW_CALL_CONV GetBorder(int nargout, mwArray& tmp_img0, mwArray& xLimit, mwArray& yLimit, const mwArray& PosLine, const mwArray& NumLine, const mwArray& img0, const mwArray& d1, const mwArray& d2);

extern LIB_detLine_CPP_API void MW_CALL_CONV exLine1(int nargout, mwArray& lineX_ori, mwArray& lineY_ori, mwArray& lineX_fit, mwArray& lineY_fit, const mwArray& I, const mwArray& pointX, const mwArray& pointY, const mwArray& num, const mwArray& flag, const mwArray& I0, const mwArray& dx, const mwArray& dy, const mwArray& d, const mwArray& flag_med, const mwArray& alpha);

extern LIB_detLine_CPP_API void MW_CALL_CONV detLine(int nargout, mwArray& StateLine, mwArray& rN, mwArray& rX, mwArray& rY, const mwArray& img, const mwArray& NumLine, const mwArray& PosLine, const mwArray& Draw, const mwArray& tmp_img0, const mwArray& xLimit, const mwArray& mTh, const mwArray& img0, const mwArray& dx, const mwArray& dy, const mwArray& d, const mwArray& flag_med, const mwArray& alpha);

#endif
#endif
