/*
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * API version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type FreeStyleProjecthealthReport struct {
	Description string `json:"description,omitempty"`
	IconClassName string `json:"iconClassName,omitempty"`
	IconUrl string `json:"iconUrl,omitempty"`
	Score int32 `json:"score,omitempty"`
	Class string `json:"_class,omitempty"`
}
