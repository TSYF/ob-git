# Created by: Pedro F Giffuni
# $FreeBSD: head/devel/cl-infix-sbcl/Makefile 569434 2021-03-29 07:37:39Z krion $

PORTNAME=	infix
PORTVERSION=	19960628
PORTREVISION=	58
CATEGORIES=	devel lisp
PKGNAMEPREFIX=	cl-
DISTFILES=	# none

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Lisp macro to read math statements in infix notation

BUILD_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/infix/infix.asd:devel/cl-infix
RUN_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/infix/infix.asd:devel/cl-infix

NO_CDROM=	No fees or compensation can be charged

USE_ASDF_FASL=	yes
FASL_TARGET=	sbcl
FASL_BUILD=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>
