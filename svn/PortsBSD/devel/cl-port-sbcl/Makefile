# Created by: Henrik Motakef <henrik.motakef@web.de>
# $FreeBSD: head/devel/cl-port-sbcl/Makefile 569434 2021-03-29 07:37:39Z krion $

PORTNAME=	port
PORTVERSION=	2002.10.02.1
PORTREVISION=	56
CATEGORIES=	devel lisp
PKGNAMEPREFIX=	cl-
DISTFILES=	# none

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Cross-Lisp portability package

BUILD_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/port/port.asd:devel/cl-port
RUN_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/port/port.asd:devel/cl-port

USE_ASDF_FASL=	yes
FASL_TARGET=	sbcl
FASL_BUILD=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>
