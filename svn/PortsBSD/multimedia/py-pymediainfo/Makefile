# Created by: Martin Neubauer <m.ne@gmx.net>
# $FreeBSD: head/multimedia/py-pymediainfo/Makefile 559531 2020-12-28 23:02:12Z antoine $

PORTNAME=	pymediainfo
PORTVERSION=	4.1
CATEGORIES=	multimedia devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	m.ne@gmx.net
COMMENT=	Python wrapper for the mediainfo library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_scm>0:devel/py-setuptools_scm@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>0:devel/py-setuptools@${PY_FLAVOR} \
		mediainfo>0:multimedia/mediainfo

USES=		python:3.6+
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
