# Created by: Craig Leres <leres@FreeBSD.org>
# $FreeBSD: head/devel/py-flynt/Makefile 569141 2021-03-24 16:22:05Z leres $

PORTNAME=	flynt
PORTVERSION=	0.61
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	leres@FreeBSD.org
COMMENT=	Convert Python scripts from string formatting to f-strings

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}astor>0:devel/py-astor@${PY_FLAVOR}

USES=		python:3.6+
USE_GITHUB=	yes
USE_PYTHON=	autoplist distutils

GH_ACCOUNT=	ikamensh

.include <bsd.port.mk>
