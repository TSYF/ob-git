# Created by: Alessando Sagratini <ale_sagra@hotmail.com>
# $FreeBSD: head/devel/py-oci/Makefile 569132 2021-03-24 15:19:52Z nc $

PORTNAME=	oci
PORTVERSION=	2.34.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ale_sagra@hotmail.com
COMMENT=	Python interface to Oracle Cloud Infrastructure

LICENSE=	APACHE20 UPL
LICENSE_COMB=	dual
LICENSE_GROUPS_UPL=	FSF GPL OSI
LICENSE_NAME_UPL=	Universal Permissive License
LICENSE_FILE_APACHE20=	${WRKSRC}/LICENSE.txt
LICENSE_FILE_UPL=	${WRKSRC}/LICENSE.txt
LICENSE_PERMS_UPL=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}certifi>0:security/py-certifi@${PY_FLAVOR} \
	        ${PYTHON_PKGNAMEPREFIX}configparser>=3.5.0b1:devel/py-configparser@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cryptography>=3.2.1:security/py-cryptography@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}openssl>=17.5.0:security/py-openssl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dateutil>=2.5.3<3.0.0:devel/py-dateutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytz>=2016.10:devel/py-pytz@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

# The testsuite isn't available in the sdist through PyPI, yet.  Switching to
# GitHub doesn't help either because the testsuite doesn't work outside
# virtualenvs at the moment.
# See also: https://github.com/oracle/oci-python-sdk/issues/164
# do-test:

.include <bsd.port.mk>
