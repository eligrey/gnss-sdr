/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-POS-INIT"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_RequestedAssistData_H_
#define	_RequestedAssistData_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NavigationModel;
struct Ver2_RequestedAssistData_extension;

/* RequestedAssistData */
typedef struct RequestedAssistData {
	BOOLEAN_t	 almanacRequested;
	BOOLEAN_t	 utcModelRequested;
	BOOLEAN_t	 ionosphericModelRequested;
	BOOLEAN_t	 dgpsCorrectionsRequested;
	BOOLEAN_t	 referenceLocationRequested;
	BOOLEAN_t	 referenceTimeRequested;
	BOOLEAN_t	 acquisitionAssistanceRequested;
	BOOLEAN_t	 realTimeIntegrityRequested;
	BOOLEAN_t	 navigationModelRequested;
	struct NavigationModel	*navigationModelData	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct Ver2_RequestedAssistData_extension	*ver2_RequestedAssistData_extension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RequestedAssistData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RequestedAssistData;
extern asn_SEQUENCE_specifics_t asn_SPC_RequestedAssistData_specs_1;
extern asn_TYPE_member_t asn_MBR_RequestedAssistData_1[11];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NavigationModel.h"
#include "Ver2-RequestedAssistData-extension.h"

#endif	/* _RequestedAssistData_H_ */
#include "asn_internal.h"