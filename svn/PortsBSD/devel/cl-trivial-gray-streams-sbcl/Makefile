# $FreeBSD: head/devel/cl-trivial-gray-streams-sbcl/Makefile 569434 2021-03-29 07:37:39Z krion $

PORTNAME=	trivial-gray-streams
PORTVERSION=	2008.11.02
PORTREVISION=	55
CATEGORIES=	devel lisp
PKGNAMEPREFIX=	cl-
DISTFILES=	# none

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Thin compatibility layer for Gray streams

BUILD_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/trivial-gray-streams/trivial-gray-streams.asd:devel/cl-trivial-gray-streams
RUN_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/trivial-gray-streams/trivial-gray-streams.asd:devel/cl-trivial-gray-streams

USE_ASDF_FASL=	yes
FASL_TARGET=	sbcl
FASL_BUILD=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>
