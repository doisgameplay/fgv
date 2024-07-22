/*** Autogenerated by WIDL 9.5 from include/textstor.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __textstor_h__
#define __textstor_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __ITextStoreACPSink_FWD_DEFINED__
#define __ITextStoreACPSink_FWD_DEFINED__
typedef interface ITextStoreACPSink ITextStoreACPSink;
#ifdef __cplusplus
interface ITextStoreACPSink;
#endif /* __cplusplus */
#endif

#ifndef __ITextStoreACP_FWD_DEFINED__
#define __ITextStoreACP_FWD_DEFINED__
typedef interface ITextStoreACP ITextStoreACP;
#ifdef __cplusplus
interface ITextStoreACP;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#define TS_E_INVALIDPOS      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0200)
#define TS_E_NOLOCK          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0201)
#define TS_E_NOOBJECT        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0202)
#define TS_E_NOSERVICE       MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0203)
#define TS_E_NOINTERFACE     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0204)
#define TS_E_NOSELECTION     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0205)
#define TS_E_NOLAYOUT        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0206)
#define TS_E_INVALIDPOINT    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0207)
#define TS_E_SYNCHRONOUS     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0208)
#define TS_E_READONLY        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0209)
#define TS_E_FORMAT          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x020a)
#define TS_S_ASYNC           MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x0300)
#define TS_DEFAULT_SELECTION (~0)

#define TS_SD_READONLY (0x1)

#define TS_SD_LOADING (0x2)

#define TS_SD_RESERVED (0x4)

#define TS_SD_TKBAUTOCORRECTENABLE (0x8)

#define TS_SD_TKBPREDICTIONENABLE (0x10)

#define TS_SD_UIINTEGRATIONENABLE (0x20)

#define TS_SD_INPUTPANEMANUALDISPLAYENABLE (0x40)

#define TS_SD_EMBEDDEDHANDWRITINGVIEW_ENABLED (0x80)

#define TS_SD_EMBEDDEDHANDWRITINGVIEW_VISIBLE (0x100)

#define TS_SD_MASKALL (TS_SD_READONLY | TS_SD_LOADING)

#define TS_SS_DISJOINTSEL (0x1)

#define TS_SS_REGIONS (0x2)

#define TS_SS_TRANSITORY (0x4)

#define TS_SS_NOHIDDENTEXT (0x8)

#define TS_SS_TKBAUTOCORRECTENABLE (0x10)

#define TS_SS_TKBPREDICTIONENABLE (0x20)

#define TS_SS_UWPCONTROL (0x40)

#define TS_AS_TEXT_CHANGE (0x1)

#define TS_AS_SEL_CHANGE (0x2)

#define TS_AS_LAYOUT_CHANGE (0x4)

#define TS_AS_ATTR_CHANGE (0x8)

#define TS_AS_STATUS_CHANGE (0x10)

#define TS_AS_ALL_SINKS ((((TS_AS_TEXT_CHANGE | TS_AS_SEL_CHANGE) | TS_AS_LAYOUT_CHANGE) | TS_AS_ATTR_CHANGE) | TS_AS_STATUS_CHANGE)

#define TS_LF_SYNC (0x1)

#define TS_LF_READ (0x2)

#define TS_LF_READWRITE (0x6)

#define TS_CHAR_EMBEDDED (0xfffc)

#define TS_CHAR_REGION (0x0)

#define TS_CHAR_REPLACEMENT (0xfffd)

#define TS_IAS_NOQUERY (0x1)

#define TS_IAS_QUERYONLY (0x2)

#define TS_ST_CORRECTION (0x1)

#define GXFPF_ROUND_NEAREST (0x1)

#define GXFPF_NEAREST (0x2)

typedef enum __WIDL_textstor_generated_name_0000000F {
    TS_AE_NONE = 0,
    TS_AE_START = 1,
    TS_AE_END = 2
} TsActiveSelEnd;
typedef enum __WIDL_textstor_generated_name_00000010 {
    TS_RT_PLAIN = 0,
    TS_RT_HIDDEN = 1,
    TS_RT_OPAQUE = 2
} TsRunType;
typedef GUID TS_ATTRID;
typedef struct TS_STATUS {
    DWORD dwDynamicFlags;
    DWORD dwStaticFlags;
} TS_STATUS;
typedef struct TS_TEXTCHANGE {
    LONG acpStart;
    LONG acpOldEnd;
    LONG acpNewEnd;
} TS_TEXTCHANGE;
typedef struct TS_SELECTIONSTYLE {
    TsActiveSelEnd ase;
    WINBOOL fInterimChar;
} TS_SELECTIONSTYLE;
typedef struct TS_SELECTION_ACP {
    LONG acpStart;
    LONG acpEnd;
    TS_SELECTIONSTYLE style;
} TS_SELECTION_ACP;
typedef struct TS_RUNINFO {
    ULONG uCount;
    TsRunType type;
} TS_RUNINFO;
typedef struct TS_ATTRVAL {
    TS_ATTRID idAttr;
    DWORD dwOverlapId;
    VARIANT varValue;
} TS_ATTRVAL;
#define TS_ATTR_FIND_BACKWARDS (0x1)

#define TS_ATTR_FIND_WANT_OFFSET (0x2)

#define TS_ATTR_FIND_UPDATESTART (0x4)

#define TS_ATTR_FIND_WANT_VALUE (0x8)

#define TS_ATTR_FIND_WANT_END (0x10)

#define TS_ATTR_FIND_HIDDEN (0x20)

typedef enum __WIDL_textstor_generated_name_00000011 {
    TS_LC_CREATE = 0,
    TS_LC_CHANGE = 1,
    TS_LC_DESTROY = 2
} TsLayoutCode;
typedef DWORD TsViewCookie;
/*****************************************************************************
 * ITextStoreACPSink interface
 */
#ifndef __ITextStoreACPSink_INTERFACE_DEFINED__
#define __ITextStoreACPSink_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITextStoreACPSink, 0x22d44c94, 0xa419, 0x4542, 0xa2,0x72, 0xae,0x26,0x09,0x3e,0xce,0xcf);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("22d44c94-a419-4542-a272-ae26093ececf")
ITextStoreACPSink : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE OnTextChange(
        DWORD dwFlags,
        const TS_TEXTCHANGE *pChange) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnSelectionChange(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnLayoutChange(
        TsLayoutCode lcode,
        TsViewCookie vcView) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnStatusChange(
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnAttrsChange(
        LONG acpStart,
        LONG acpEnd,
        ULONG cAttrs,
        const TS_ATTRID *paAttrs) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnLockGranted(
        DWORD dwLockFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnStartEditTransaction(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnEndEditTransaction(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITextStoreACPSink, 0x22d44c94, 0xa419, 0x4542, 0xa2,0x72, 0xae,0x26,0x09,0x3e,0xce,0xcf)
#endif
#else
typedef struct ITextStoreACPSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITextStoreACPSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITextStoreACPSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITextStoreACPSink *This);

    /*** ITextStoreACPSink methods ***/
    HRESULT (STDMETHODCALLTYPE *OnTextChange)(
        ITextStoreACPSink *This,
        DWORD dwFlags,
        const TS_TEXTCHANGE *pChange);

    HRESULT (STDMETHODCALLTYPE *OnSelectionChange)(
        ITextStoreACPSink *This);

    HRESULT (STDMETHODCALLTYPE *OnLayoutChange)(
        ITextStoreACPSink *This,
        TsLayoutCode lcode,
        TsViewCookie vcView);

    HRESULT (STDMETHODCALLTYPE *OnStatusChange)(
        ITextStoreACPSink *This,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *OnAttrsChange)(
        ITextStoreACPSink *This,
        LONG acpStart,
        LONG acpEnd,
        ULONG cAttrs,
        const TS_ATTRID *paAttrs);

    HRESULT (STDMETHODCALLTYPE *OnLockGranted)(
        ITextStoreACPSink *This,
        DWORD dwLockFlags);

    HRESULT (STDMETHODCALLTYPE *OnStartEditTransaction)(
        ITextStoreACPSink *This);

    HRESULT (STDMETHODCALLTYPE *OnEndEditTransaction)(
        ITextStoreACPSink *This);

    END_INTERFACE
} ITextStoreACPSinkVtbl;

interface ITextStoreACPSink {
    CONST_VTBL ITextStoreACPSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITextStoreACPSink_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITextStoreACPSink_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITextStoreACPSink_Release(This) (This)->lpVtbl->Release(This)
/*** ITextStoreACPSink methods ***/
#define ITextStoreACPSink_OnTextChange(This,dwFlags,pChange) (This)->lpVtbl->OnTextChange(This,dwFlags,pChange)
#define ITextStoreACPSink_OnSelectionChange(This) (This)->lpVtbl->OnSelectionChange(This)
#define ITextStoreACPSink_OnLayoutChange(This,lcode,vcView) (This)->lpVtbl->OnLayoutChange(This,lcode,vcView)
#define ITextStoreACPSink_OnStatusChange(This,dwFlags) (This)->lpVtbl->OnStatusChange(This,dwFlags)
#define ITextStoreACPSink_OnAttrsChange(This,acpStart,acpEnd,cAttrs,paAttrs) (This)->lpVtbl->OnAttrsChange(This,acpStart,acpEnd,cAttrs,paAttrs)
#define ITextStoreACPSink_OnLockGranted(This,dwLockFlags) (This)->lpVtbl->OnLockGranted(This,dwLockFlags)
#define ITextStoreACPSink_OnStartEditTransaction(This) (This)->lpVtbl->OnStartEditTransaction(This)
#define ITextStoreACPSink_OnEndEditTransaction(This) (This)->lpVtbl->OnEndEditTransaction(This)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ITextStoreACPSink_QueryInterface(ITextStoreACPSink* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ITextStoreACPSink_AddRef(ITextStoreACPSink* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ITextStoreACPSink_Release(ITextStoreACPSink* This) {
    return This->lpVtbl->Release(This);
}
/*** ITextStoreACPSink methods ***/
static __WIDL_INLINE HRESULT ITextStoreACPSink_OnTextChange(ITextStoreACPSink* This,DWORD dwFlags,const TS_TEXTCHANGE *pChange) {
    return This->lpVtbl->OnTextChange(This,dwFlags,pChange);
}
static __WIDL_INLINE HRESULT ITextStoreACPSink_OnSelectionChange(ITextStoreACPSink* This) {
    return This->lpVtbl->OnSelectionChange(This);
}
static __WIDL_INLINE HRESULT ITextStoreACPSink_OnLayoutChange(ITextStoreACPSink* This,TsLayoutCode lcode,TsViewCookie vcView) {
    return This->lpVtbl->OnLayoutChange(This,lcode,vcView);
}
static __WIDL_INLINE HRESULT ITextStoreACPSink_OnStatusChange(ITextStoreACPSink* This,DWORD dwFlags) {
    return This->lpVtbl->OnStatusChange(This,dwFlags);
}
static __WIDL_INLINE HRESULT ITextStoreACPSink_OnAttrsChange(ITextStoreACPSink* This,LONG acpStart,LONG acpEnd,ULONG cAttrs,const TS_ATTRID *paAttrs) {
    return This->lpVtbl->OnAttrsChange(This,acpStart,acpEnd,cAttrs,paAttrs);
}
static __WIDL_INLINE HRESULT ITextStoreACPSink_OnLockGranted(ITextStoreACPSink* This,DWORD dwLockFlags) {
    return This->lpVtbl->OnLockGranted(This,dwLockFlags);
}
static __WIDL_INLINE HRESULT ITextStoreACPSink_OnStartEditTransaction(ITextStoreACPSink* This) {
    return This->lpVtbl->OnStartEditTransaction(This);
}
static __WIDL_INLINE HRESULT ITextStoreACPSink_OnEndEditTransaction(ITextStoreACPSink* This) {
    return This->lpVtbl->OnEndEditTransaction(This);
}
#endif
#endif

#endif


#endif  /* __ITextStoreACPSink_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITextStoreACP interface
 */
#ifndef __ITextStoreACP_INTERFACE_DEFINED__
#define __ITextStoreACP_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITextStoreACP, 0x28888fe3, 0xc2a0, 0x483a, 0xa3,0xea, 0x8c,0xb1,0xce,0x51,0xff,0x3d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("28888fe3-c2a0-483a-a3ea-8cb1ce51ff3d")
ITextStoreACP : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE AdviseSink(
        REFIID riid,
        IUnknown *punk,
        DWORD dwMask) = 0;

    virtual HRESULT STDMETHODCALLTYPE UnadviseSink(
        IUnknown *punk) = 0;

    virtual HRESULT STDMETHODCALLTYPE RequestLock(
        DWORD dwLockFlags,
        HRESULT *phrSession) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStatus(
        TS_STATUS *pdcs) = 0;

    virtual HRESULT STDMETHODCALLTYPE QueryInsert(
        LONG acpTestStart,
        LONG acpTestEnd,
        ULONG cch,
        LONG *pacpResultStart,
        LONG *pacpResultEnd) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSelection(
        ULONG ulIndex,
        ULONG ulCount,
        TS_SELECTION_ACP *pSelection,
        ULONG *pcFetched) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSelection(
        ULONG ulCount,
        const TS_SELECTION_ACP *pSelection) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetText(
        LONG acpStart,
        LONG acpEnd,
        WCHAR *pchPlain,
        ULONG cchPlainReq,
        ULONG *pcchPlainRet,
        TS_RUNINFO *prgRunInfo,
        ULONG cRunInfoReq,
        ULONG *pcRunInfoRet,
        LONG *pacpNext) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetText(
        DWORD dwFlags,
        LONG acpStart,
        LONG acpEnd,
        const WCHAR *pchText,
        ULONG cch,
        TS_TEXTCHANGE *pChange) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFormattedText(
        LONG acpStart,
        LONG acpEnd,
        IDataObject **ppDataObject) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetEmbedded(
        LONG acpPos,
        REFGUID rguidService,
        REFIID riid,
        IUnknown **ppunk) = 0;

    virtual HRESULT STDMETHODCALLTYPE QueryInsertEmbedded(
        const GUID *pguidService,
        const FORMATETC *pFormatEtc,
        WINBOOL *pfInsertable) = 0;

    virtual HRESULT STDMETHODCALLTYPE InsertEmbedded(
        DWORD dwFlags,
        LONG acpStart,
        LONG acpEnd,
        IDataObject *pDataObject,
        TS_TEXTCHANGE *pChange) = 0;

    virtual HRESULT STDMETHODCALLTYPE InsertTextAtSelection(
        DWORD dwFlags,
        const WCHAR *pchText,
        ULONG cch,
        LONG *pacpStart,
        LONG *pacpEnd,
        TS_TEXTCHANGE *pChange) = 0;

    virtual HRESULT STDMETHODCALLTYPE InsertEmbeddedAtSelection(
        DWORD dwFlags,
        IDataObject *pDataObject,
        LONG *pacpStart,
        LONG *pacpEnd,
        TS_TEXTCHANGE *pChange) = 0;

    virtual HRESULT STDMETHODCALLTYPE RequestSupportedAttrs(
        DWORD dwFlags,
        ULONG cFilterAttrs,
        const TS_ATTRID *paFilterAttrs) = 0;

    virtual HRESULT STDMETHODCALLTYPE RequestAttrsAtPosition(
        LONG acpPos,
        ULONG cFilterAttrs,
        const TS_ATTRID *paFilterAttrs,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE RequestAttrsTransitioningAtPosition(
        LONG acpPos,
        ULONG cFilterAttrs,
        const TS_ATTRID *paFilterAttrs,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE FindNextAttrTransition(
        LONG acpStart,
        LONG acpHalt,
        ULONG cFilterAttrs,
        const TS_ATTRID *paFilterAttrs,
        DWORD dwFlags,
        LONG *pacpNext,
        WINBOOL *pfFound,
        LONG *plFoundOffset) = 0;

    virtual HRESULT STDMETHODCALLTYPE RetrieveRequestedAttrs(
        ULONG ulCount,
        TS_ATTRVAL *paAttrVals,
        ULONG *pcFetched) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetEndACP(
        LONG *pacp) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetActiveView(
        TsViewCookie *pvcView) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetACPFromPoint(
        TsViewCookie vcView,
        const POINT *ptScreen,
        DWORD dwFlags,
        LONG *pacp) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTextExt(
        TsViewCookie vcView,
        LONG acpStart,
        LONG acpEnd,
        RECT *prc,
        WINBOOL *pfClipped) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetScreenExt(
        TsViewCookie vcView,
        RECT *prc) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetWnd(
        TsViewCookie vcView,
        HWND *phwnd) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITextStoreACP, 0x28888fe3, 0xc2a0, 0x483a, 0xa3,0xea, 0x8c,0xb1,0xce,0x51,0xff,0x3d)
#endif
#else
typedef struct ITextStoreACPVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITextStoreACP *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITextStoreACP *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITextStoreACP *This);

    /*** ITextStoreACP methods ***/
    HRESULT (STDMETHODCALLTYPE *AdviseSink)(
        ITextStoreACP *This,
        REFIID riid,
        IUnknown *punk,
        DWORD dwMask);

    HRESULT (STDMETHODCALLTYPE *UnadviseSink)(
        ITextStoreACP *This,
        IUnknown *punk);

    HRESULT (STDMETHODCALLTYPE *RequestLock)(
        ITextStoreACP *This,
        DWORD dwLockFlags,
        HRESULT *phrSession);

    HRESULT (STDMETHODCALLTYPE *GetStatus)(
        ITextStoreACP *This,
        TS_STATUS *pdcs);

    HRESULT (STDMETHODCALLTYPE *QueryInsert)(
        ITextStoreACP *This,
        LONG acpTestStart,
        LONG acpTestEnd,
        ULONG cch,
        LONG *pacpResultStart,
        LONG *pacpResultEnd);

    HRESULT (STDMETHODCALLTYPE *GetSelection)(
        ITextStoreACP *This,
        ULONG ulIndex,
        ULONG ulCount,
        TS_SELECTION_ACP *pSelection,
        ULONG *pcFetched);

    HRESULT (STDMETHODCALLTYPE *SetSelection)(
        ITextStoreACP *This,
        ULONG ulCount,
        const TS_SELECTION_ACP *pSelection);

    HRESULT (STDMETHODCALLTYPE *GetText)(
        ITextStoreACP *This,
        LONG acpStart,
        LONG acpEnd,
        WCHAR *pchPlain,
        ULONG cchPlainReq,
        ULONG *pcchPlainRet,
        TS_RUNINFO *prgRunInfo,
        ULONG cRunInfoReq,
        ULONG *pcRunInfoRet,
        LONG *pacpNext);

    HRESULT (STDMETHODCALLTYPE *SetText)(
        ITextStoreACP *This,
        DWORD dwFlags,
        LONG acpStart,
        LONG acpEnd,
        const WCHAR *pchText,
        ULONG cch,
        TS_TEXTCHANGE *pChange);

    HRESULT (STDMETHODCALLTYPE *GetFormattedText)(
        ITextStoreACP *This,
        LONG acpStart,
        LONG acpEnd,
        IDataObject **ppDataObject);

    HRESULT (STDMETHODCALLTYPE *GetEmbedded)(
        ITextStoreACP *This,
        LONG acpPos,
        REFGUID rguidService,
        REFIID riid,
        IUnknown **ppunk);

    HRESULT (STDMETHODCALLTYPE *QueryInsertEmbedded)(
        ITextStoreACP *This,
        const GUID *pguidService,
        const FORMATETC *pFormatEtc,
        WINBOOL *pfInsertable);

    HRESULT (STDMETHODCALLTYPE *InsertEmbedded)(
        ITextStoreACP *This,
        DWORD dwFlags,
        LONG acpStart,
        LONG acpEnd,
        IDataObject *pDataObject,
        TS_TEXTCHANGE *pChange);

    HRESULT (STDMETHODCALLTYPE *InsertTextAtSelection)(
        ITextStoreACP *This,
        DWORD dwFlags,
        const WCHAR *pchText,
        ULONG cch,
        LONG *pacpStart,
        LONG *pacpEnd,
        TS_TEXTCHANGE *pChange);

    HRESULT (STDMETHODCALLTYPE *InsertEmbeddedAtSelection)(
        ITextStoreACP *This,
        DWORD dwFlags,
        IDataObject *pDataObject,
        LONG *pacpStart,
        LONG *pacpEnd,
        TS_TEXTCHANGE *pChange);

    HRESULT (STDMETHODCALLTYPE *RequestSupportedAttrs)(
        ITextStoreACP *This,
        DWORD dwFlags,
        ULONG cFilterAttrs,
        const TS_ATTRID *paFilterAttrs);

    HRESULT (STDMETHODCALLTYPE *RequestAttrsAtPosition)(
        ITextStoreACP *This,
        LONG acpPos,
        ULONG cFilterAttrs,
        const TS_ATTRID *paFilterAttrs,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *RequestAttrsTransitioningAtPosition)(
        ITextStoreACP *This,
        LONG acpPos,
        ULONG cFilterAttrs,
        const TS_ATTRID *paFilterAttrs,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *FindNextAttrTransition)(
        ITextStoreACP *This,
        LONG acpStart,
        LONG acpHalt,
        ULONG cFilterAttrs,
        const TS_ATTRID *paFilterAttrs,
        DWORD dwFlags,
        LONG *pacpNext,
        WINBOOL *pfFound,
        LONG *plFoundOffset);

    HRESULT (STDMETHODCALLTYPE *RetrieveRequestedAttrs)(
        ITextStoreACP *This,
        ULONG ulCount,
        TS_ATTRVAL *paAttrVals,
        ULONG *pcFetched);

    HRESULT (STDMETHODCALLTYPE *GetEndACP)(
        ITextStoreACP *This,
        LONG *pacp);

    HRESULT (STDMETHODCALLTYPE *GetActiveView)(
        ITextStoreACP *This,
        TsViewCookie *pvcView);

    HRESULT (STDMETHODCALLTYPE *GetACPFromPoint)(
        ITextStoreACP *This,
        TsViewCookie vcView,
        const POINT *ptScreen,
        DWORD dwFlags,
        LONG *pacp);

    HRESULT (STDMETHODCALLTYPE *GetTextExt)(
        ITextStoreACP *This,
        TsViewCookie vcView,
        LONG acpStart,
        LONG acpEnd,
        RECT *prc,
        WINBOOL *pfClipped);

    HRESULT (STDMETHODCALLTYPE *GetScreenExt)(
        ITextStoreACP *This,
        TsViewCookie vcView,
        RECT *prc);

    HRESULT (STDMETHODCALLTYPE *GetWnd)(
        ITextStoreACP *This,
        TsViewCookie vcView,
        HWND *phwnd);

    END_INTERFACE
} ITextStoreACPVtbl;

interface ITextStoreACP {
    CONST_VTBL ITextStoreACPVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITextStoreACP_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITextStoreACP_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITextStoreACP_Release(This) (This)->lpVtbl->Release(This)
/*** ITextStoreACP methods ***/
#define ITextStoreACP_AdviseSink(This,riid,punk,dwMask) (This)->lpVtbl->AdviseSink(This,riid,punk,dwMask)
#define ITextStoreACP_UnadviseSink(This,punk) (This)->lpVtbl->UnadviseSink(This,punk)
#define ITextStoreACP_RequestLock(This,dwLockFlags,phrSession) (This)->lpVtbl->RequestLock(This,dwLockFlags,phrSession)
#define ITextStoreACP_GetStatus(This,pdcs) (This)->lpVtbl->GetStatus(This,pdcs)
#define ITextStoreACP_QueryInsert(This,acpTestStart,acpTestEnd,cch,pacpResultStart,pacpResultEnd) (This)->lpVtbl->QueryInsert(This,acpTestStart,acpTestEnd,cch,pacpResultStart,pacpResultEnd)
#define ITextStoreACP_GetSelection(This,ulIndex,ulCount,pSelection,pcFetched) (This)->lpVtbl->GetSelection(This,ulIndex,ulCount,pSelection,pcFetched)
#define ITextStoreACP_SetSelection(This,ulCount,pSelection) (This)->lpVtbl->SetSelection(This,ulCount,pSelection)
#define ITextStoreACP_GetText(This,acpStart,acpEnd,pchPlain,cchPlainReq,pcchPlainRet,prgRunInfo,cRunInfoReq,pcRunInfoRet,pacpNext) (This)->lpVtbl->GetText(This,acpStart,acpEnd,pchPlain,cchPlainReq,pcchPlainRet,prgRunInfo,cRunInfoReq,pcRunInfoRet,pacpNext)
#define ITextStoreACP_SetText(This,dwFlags,acpStart,acpEnd,pchText,cch,pChange) (This)->lpVtbl->SetText(This,dwFlags,acpStart,acpEnd,pchText,cch,pChange)
#define ITextStoreACP_GetFormattedText(This,acpStart,acpEnd,ppDataObject) (This)->lpVtbl->GetFormattedText(This,acpStart,acpEnd,ppDataObject)
#define ITextStoreACP_GetEmbedded(This,acpPos,rguidService,riid,ppunk) (This)->lpVtbl->GetEmbedded(This,acpPos,rguidService,riid,ppunk)
#define ITextStoreACP_QueryInsertEmbedded(This,pguidService,pFormatEtc,pfInsertable) (This)->lpVtbl->QueryInsertEmbedded(This,pguidService,pFormatEtc,pfInsertable)
#define ITextStoreACP_InsertEmbedded(This,dwFlags,acpStart,acpEnd,pDataObject,pChange) (This)->lpVtbl->InsertEmbedded(This,dwFlags,acpStart,acpEnd,pDataObject,pChange)
#define ITextStoreACP_InsertTextAtSelection(This,dwFlags,pchText,cch,pacpStart,pacpEnd,pChange) (This)->lpVtbl->InsertTextAtSelection(This,dwFlags,pchText,cch,pacpStart,pacpEnd,pChange)
#define ITextStoreACP_InsertEmbeddedAtSelection(This,dwFlags,pDataObject,pacpStart,pacpEnd,pChange) (This)->lpVtbl->InsertEmbeddedAtSelection(This,dwFlags,pDataObject,pacpStart,pacpEnd,pChange)
#define ITextStoreACP_RequestSupportedAttrs(This,dwFlags,cFilterAttrs,paFilterAttrs) (This)->lpVtbl->RequestSupportedAttrs(This,dwFlags,cFilterAttrs,paFilterAttrs)
#define ITextStoreACP_RequestAttrsAtPosition(This,acpPos,cFilterAttrs,paFilterAttrs,dwFlags) (This)->lpVtbl->RequestAttrsAtPosition(This,acpPos,cFilterAttrs,paFilterAttrs,dwFlags)
#define ITextStoreACP_RequestAttrsTransitioningAtPosition(This,acpPos,cFilterAttrs,paFilterAttrs,dwFlags) (This)->lpVtbl->RequestAttrsTransitioningAtPosition(This,acpPos,cFilterAttrs,paFilterAttrs,dwFlags)
#define ITextStoreACP_FindNextAttrTransition(This,acpStart,acpHalt,cFilterAttrs,paFilterAttrs,dwFlags,pacpNext,pfFound,plFoundOffset) (This)->lpVtbl->FindNextAttrTransition(This,acpStart,acpHalt,cFilterAttrs,paFilterAttrs,dwFlags,pacpNext,pfFound,plFoundOffset)
#define ITextStoreACP_RetrieveRequestedAttrs(This,ulCount,paAttrVals,pcFetched) (This)->lpVtbl->RetrieveRequestedAttrs(This,ulCount,paAttrVals,pcFetched)
#define ITextStoreACP_GetEndACP(This,pacp) (This)->lpVtbl->GetEndACP(This,pacp)
#define ITextStoreACP_GetActiveView(This,pvcView) (This)->lpVtbl->GetActiveView(This,pvcView)
#define ITextStoreACP_GetACPFromPoint(This,vcView,ptScreen,dwFlags,pacp) (This)->lpVtbl->GetACPFromPoint(This,vcView,ptScreen,dwFlags,pacp)
#define ITextStoreACP_GetTextExt(This,vcView,acpStart,acpEnd,prc,pfClipped) (This)->lpVtbl->GetTextExt(This,vcView,acpStart,acpEnd,prc,pfClipped)
#define ITextStoreACP_GetScreenExt(This,vcView,prc) (This)->lpVtbl->GetScreenExt(This,vcView,prc)
#define ITextStoreACP_GetWnd(This,vcView,phwnd) (This)->lpVtbl->GetWnd(This,vcView,phwnd)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ITextStoreACP_QueryInterface(ITextStoreACP* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ITextStoreACP_AddRef(ITextStoreACP* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ITextStoreACP_Release(ITextStoreACP* This) {
    return This->lpVtbl->Release(This);
}
/*** ITextStoreACP methods ***/
static __WIDL_INLINE HRESULT ITextStoreACP_AdviseSink(ITextStoreACP* This,REFIID riid,IUnknown *punk,DWORD dwMask) {
    return This->lpVtbl->AdviseSink(This,riid,punk,dwMask);
}
static __WIDL_INLINE HRESULT ITextStoreACP_UnadviseSink(ITextStoreACP* This,IUnknown *punk) {
    return This->lpVtbl->UnadviseSink(This,punk);
}
static __WIDL_INLINE HRESULT ITextStoreACP_RequestLock(ITextStoreACP* This,DWORD dwLockFlags,HRESULT *phrSession) {
    return This->lpVtbl->RequestLock(This,dwLockFlags,phrSession);
}
static __WIDL_INLINE HRESULT ITextStoreACP_GetStatus(ITextStoreACP* This,TS_STATUS *pdcs) {
    return This->lpVtbl->GetStatus(This,pdcs);
}
static __WIDL_INLINE HRESULT ITextStoreACP_QueryInsert(ITextStoreACP* This,LONG acpTestStart,LONG acpTestEnd,ULONG cch,LONG *pacpResultStart,LONG *pacpResultEnd) {
    return This->lpVtbl->QueryInsert(This,acpTestStart,acpTestEnd,cch,pacpResultStart,pacpResultEnd);
}
static __WIDL_INLINE HRESULT ITextStoreACP_GetSelection(ITextStoreACP* This,ULONG ulIndex,ULONG ulCount,TS_SELECTION_ACP *pSelection,ULONG *pcFetched) {
    return This->lpVtbl->GetSelection(This,ulIndex,ulCount,pSelection,pcFetched);
}
static __WIDL_INLINE HRESULT ITextStoreACP_SetSelection(ITextStoreACP* This,ULONG ulCount,const TS_SELECTION_ACP *pSelection) {
    return This->lpVtbl->SetSelection(This,ulCount,pSelection);
}
static __WIDL_INLINE HRESULT ITextStoreACP_GetText(ITextStoreACP* This,LONG acpStart,LONG acpEnd,WCHAR *pchPlain,ULONG cchPlainReq,ULONG *pcchPlainRet,TS_RUNINFO *prgRunInfo,ULONG cRunInfoReq,ULONG *pcRunInfoRet,LONG *pacpNext) {
    return This->lpVtbl->GetText(This,acpStart,acpEnd,pchPlain,cchPlainReq,pcchPlainRet,prgRunInfo,cRunInfoReq,pcRunInfoRet,pacpNext);
}
static __WIDL_INLINE HRESULT ITextStoreACP_SetText(ITextStoreACP* This,DWORD dwFlags,LONG acpStart,LONG acpEnd,const WCHAR *pchText,ULONG cch,TS_TEXTCHANGE *pChange) {
    return This->lpVtbl->SetText(This,dwFlags,acpStart,acpEnd,pchText,cch,pChange);
}
static __WIDL_INLINE HRESULT ITextStoreACP_GetFormattedText(ITextStoreACP* This,LONG acpStart,LONG acpEnd,IDataObject **ppDataObject) {
    return This->lpVtbl->GetFormattedText(This,acpStart,acpEnd,ppDataObject);
}
static __WIDL_INLINE HRESULT ITextStoreACP_GetEmbedded(ITextStoreACP* This,LONG acpPos,REFGUID rguidService,REFIID riid,IUnknown **ppunk) {
    return This->lpVtbl->GetEmbedded(This,acpPos,rguidService,riid,ppunk);
}
static __WIDL_INLINE HRESULT ITextStoreACP_QueryInsertEmbedded(ITextStoreACP* This,const GUID *pguidService,const FORMATETC *pFormatEtc,WINBOOL *pfInsertable) {
    return This->lpVtbl->QueryInsertEmbedded(This,pguidService,pFormatEtc,pfInsertable);
}
static __WIDL_INLINE HRESULT ITextStoreACP_InsertEmbedded(ITextStoreACP* This,DWORD dwFlags,LONG acpStart,LONG acpEnd,IDataObject *pDataObject,TS_TEXTCHANGE *pChange) {
    return This->lpVtbl->InsertEmbedded(This,dwFlags,acpStart,acpEnd,pDataObject,pChange);
}
static __WIDL_INLINE HRESULT ITextStoreACP_InsertTextAtSelection(ITextStoreACP* This,DWORD dwFlags,const WCHAR *pchText,ULONG cch,LONG *pacpStart,LONG *pacpEnd,TS_TEXTCHANGE *pChange) {
    return This->lpVtbl->InsertTextAtSelection(This,dwFlags,pchText,cch,pacpStart,pacpEnd,pChange);
}
static __WIDL_INLINE HRESULT ITextStoreACP_InsertEmbeddedAtSelection(ITextStoreACP* This,DWORD dwFlags,IDataObject *pDataObject,LONG *pacpStart,LONG *pacpEnd,TS_TEXTCHANGE *pChange) {
    return This->lpVtbl->InsertEmbeddedAtSelection(This,dwFlags,pDataObject,pacpStart,pacpEnd,pChange);
}
static __WIDL_INLINE HRESULT ITextStoreACP_RequestSupportedAttrs(ITextStoreACP* This,DWORD dwFlags,ULONG cFilterAttrs,const TS_ATTRID *paFilterAttrs) {
    return This->lpVtbl->RequestSupportedAttrs(This,dwFlags,cFilterAttrs,paFilterAttrs);
}
static __WIDL_INLINE HRESULT ITextStoreACP_RequestAttrsAtPosition(ITextStoreACP* This,LONG acpPos,ULONG cFilterAttrs,const TS_ATTRID *paFilterAttrs,DWORD dwFlags) {
    return This->lpVtbl->RequestAttrsAtPosition(This,acpPos,cFilterAttrs,paFilterAttrs,dwFlags);
}
static __WIDL_INLINE HRESULT ITextStoreACP_RequestAttrsTransitioningAtPosition(ITextStoreACP* This,LONG acpPos,ULONG cFilterAttrs,const TS_ATTRID *paFilterAttrs,DWORD dwFlags) {
    return This->lpVtbl->RequestAttrsTransitioningAtPosition(This,acpPos,cFilterAttrs,paFilterAttrs,dwFlags);
}
static __WIDL_INLINE HRESULT ITextStoreACP_FindNextAttrTransition(ITextStoreACP* This,LONG acpStart,LONG acpHalt,ULONG cFilterAttrs,const TS_ATTRID *paFilterAttrs,DWORD dwFlags,LONG *pacpNext,WINBOOL *pfFound,LONG *plFoundOffset) {
    return This->lpVtbl->FindNextAttrTransition(This,acpStart,acpHalt,cFilterAttrs,paFilterAttrs,dwFlags,pacpNext,pfFound,plFoundOffset);
}
static __WIDL_INLINE HRESULT ITextStoreACP_RetrieveRequestedAttrs(ITextStoreACP* This,ULONG ulCount,TS_ATTRVAL *paAttrVals,ULONG *pcFetched) {
    return This->lpVtbl->RetrieveRequestedAttrs(This,ulCount,paAttrVals,pcFetched);
}
static __WIDL_INLINE HRESULT ITextStoreACP_GetEndACP(ITextStoreACP* This,LONG *pacp) {
    return This->lpVtbl->GetEndACP(This,pacp);
}
static __WIDL_INLINE HRESULT ITextStoreACP_GetActiveView(ITextStoreACP* This,TsViewCookie *pvcView) {
    return This->lpVtbl->GetActiveView(This,pvcView);
}
static __WIDL_INLINE HRESULT ITextStoreACP_GetACPFromPoint(ITextStoreACP* This,TsViewCookie vcView,const POINT *ptScreen,DWORD dwFlags,LONG *pacp) {
    return This->lpVtbl->GetACPFromPoint(This,vcView,ptScreen,dwFlags,pacp);
}
static __WIDL_INLINE HRESULT ITextStoreACP_GetTextExt(ITextStoreACP* This,TsViewCookie vcView,LONG acpStart,LONG acpEnd,RECT *prc,WINBOOL *pfClipped) {
    return This->lpVtbl->GetTextExt(This,vcView,acpStart,acpEnd,prc,pfClipped);
}
static __WIDL_INLINE HRESULT ITextStoreACP_GetScreenExt(ITextStoreACP* This,TsViewCookie vcView,RECT *prc) {
    return This->lpVtbl->GetScreenExt(This,vcView,prc);
}
static __WIDL_INLINE HRESULT ITextStoreACP_GetWnd(ITextStoreACP* This,TsViewCookie vcView,HWND *phwnd) {
    return This->lpVtbl->GetWnd(This,vcView,phwnd);
}
#endif
#endif

#endif


#endif  /* __ITextStoreACP_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER CLIPFORMAT_UserSize     (ULONG *, ULONG, CLIPFORMAT *);
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal  (ULONG *, unsigned char *, CLIPFORMAT *);
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal(ULONG *, unsigned char *, CLIPFORMAT *);
void            __RPC_USER CLIPFORMAT_UserFree     (ULONG *, CLIPFORMAT *);
ULONG           __RPC_USER VARIANT_UserSize     (ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal  (ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void            __RPC_USER VARIANT_UserFree     (ULONG *, VARIANT *);
ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __textstor_h__ */
