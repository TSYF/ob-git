# $FreeBSD: head/devel/py-qasync/Makefile 569539 2021-03-30 04:51:20Z yuri $

PORTNAME=	qasync
DISTVERSION=	0.15.0
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Implementation of the PEP 3156 Event-Loop with Qt

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}AnyQt>0:x11-toolkits/py-AnyQt@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

.include <bsd.port.mk>
