# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: head/multimedia/py-librtmp/Makefile 559976 2021-01-02 22:45:42Z rene $

PORTNAME=	librtmp
PORTVERSION=	0.3.0
PORTREVISION=	1
CATEGORIES=	multimedia python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Python bindings for librtmp, built with cffi

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	librtmp.so:multimedia/librtmp
BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>=0:devel/py-cffi@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>=0:devel/py-cffi@${PY_FLAVOR}

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

USES=		python:3.6+
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/librtmp/_librtmp*.so

.include <bsd.port.mk>
